#ifndef STATISTICA_H
#define STATISTICA_H
#include <iostream>
#include "Student.h"
#include <cstring>
#include "InterfataStatistica.h"

using namespace std;
class GrupaInvalida : public exception
{
public:
    virtual const char* what() const throw()
    {
        return "Grupa introdusa nu exista!";
    }
};


class Statistica : public InterfataStatistica
{
private:
    Student* studenti;
    int nrstudenti;
    static int nrstatistici;

public:
    Statistica(Student* studenti,int nrstudenti)
    {
        this->studenti=studenti;
        this->nrstudenti=nrstudenti;
    }
    virtual int nrbaieti(int grupa)
    {
        if(grupa < 100 || grupa > 999)
        {
            throw GrupaInvalida();
        }
        int cnt=0;
        for(int i=0; i<nrstudenti; i++)
        {
            if(studenti[i].getgrupa()==grupa && ((studenti[i].getcnp()[0]=='5') || ((studenti[i].getcnp()[0]=='1'))))
                cnt++;
        }
        return cnt;
    }

    virtual int nrfete(int grupa)
    {
        if(grupa < 100 || grupa > 999)
        {
            throw GrupaInvalida();
        }
        int cnt=0;
        for(int i=0; i<nrstudenti; i++)
            if(studenti[i].getgrupa()==grupa && ((studenti[i].getcnp()[0]=='6') || ((studenti[i].getcnp()[0]=='2'))))
                cnt++;
        return cnt;
    }

    //virtual ~Statistica()

        //delete[] studenti;

    /*
    virtual double mediaaritmetica(int grupa){
    int sum=0;
    int cntt=0;
    for(int i=0;i < nrstudenti;i++)
    if(studenti[i].getgrupa()==grupa){
        sum +=studenti[i].getnota(i);
        cntt++;
    }
    if(cntt > 0){
        return sum/cntt;
    }
    else return 0;
    }
    */
    static int getnrstatistici()
    {
        return nrstatistici;
    }

    static void setnrstatistici(int nr)
    {
        nrstatistici = nr;
    }
    ~Statistica() {
    }

};
#endif // STATISTICA_H
