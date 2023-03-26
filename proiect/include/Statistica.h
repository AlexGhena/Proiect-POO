#ifndef STATISTICA_H
#define STATISTICA_H
#include <iostream>
#include "Student.h"
#include <cstring>

using namespace std;


class Statistica
{
private:
    Student* studenti;
    int nrstudenti;

public:
    Statistica(Student* studenti,int nrstudenti){
    this->studenti=studenti;
    this->nrstudenti=nrstudenti;
    }
    int nrbaieti(int grupa){
    int cnt=0;
    for(int i=0;i<nrstudenti;i++){
        if(studenti[i].getgrupa()==grupa && (strcmp(&studenti[i].getcnp()[0],"5")==0 || strcmp(&studenti[i].getcnp()[0],"1")==0))
        cnt++;
    }
    return cnt;
    }
    int nrfete(int grupa){
        int cnt=0;
    for(int i=0;i<nrstudenti;i++)
        if(studenti[i].getgrupa()==grupa && (strcmp(&studenti[i].getcnp()[0],"6")==0 || strcmp(&studenti[i].getcnp()[0],"2")==0))
        cnt++;
    return cnt;
    }
};

#endif // STATISTICA_H
