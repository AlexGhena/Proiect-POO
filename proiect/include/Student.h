#ifndef STUDENT_H
#define STUDENT_H
#include <cstring>
#include <iostream>
#include "Note.h"

using namespace std;

class Student
{
private:
    int nr_matricol;
    char cnp[14];
    char *nume;
    char *prenume;
    char *email;
    int varsta;
    int grupa;
    char nr_telefon[12];
    bool sef_grupa;
    Note note;

public:
    Student()
    {
        nr_matricol=0;
        for(int i=0; i<14; i++)
            cnp[i]='\0';
        email=new char[1];
        nume=new char[1];
        prenume=new char[1];
        varsta=0;
        grupa=0;
        sef_grupa=false;
        for(int i=0; i<12; i++)
            nr_telefon[i]='\0';
    }
    Student(int nr_matricol1, char cnp1[], char nume1[],char prenume1[],char email1[], int varsta1, int grupa1, char nr_telefon1[],bool sef_grupa1)
    {
        nume=new char[strlen(nume1)+1];
        prenume= new char[strlen(prenume1)+1];
        email=new char[strlen(email1)+1];
        strcpy(nume,nume1);
        strcpy(prenume,prenume1);
        strcpy(email,email1);
        nr_matricol=nr_matricol1;
        strcpy(nr_telefon,nr_telefon1);
        varsta=varsta1;
        strcpy(cnp,cnp1);
        grupa=grupa1;
    }
    Student(const Student& s);
///GETTERI:
    int getnrmatricol() const
    {
        return nr_matricol;
    }

    const char* getcnp() const
    {
        return cnp;
    }
    const char* getnume() const
    {
        return nume;
    }
    const char*getprenume() const
    {
        return prenume;
    }
    const char*getemail() const
    {
        return email;
    }
    const int getvarsta() const
    {
        return varsta;
    }
    const int getgrupa() const
    {
        return grupa;
    }
    const char* getnrtel() const
    {
        return nr_telefon;
    }
    const bool esefgrupa() const
    {
        return sef_grupa;
    }

///SETTERI:
    void setnrmatricol(int nr_matricol1)
    {
        nr_matricol=nr_matricol1;
    }
    void setcnp(char cnp1[])
    {
        strcpy(cnp,cnp1);
    }
    void setnume(const char* nume1)
    {
        delete[] nume;
        nume=new char[strlen(nume1)+1];
        strcpy(nume,nume1);
    }
    void setprenume(const char* prenume1)
    {
        delete[] prenume;
        prenume=new char[(strlen(prenume1)+1)];
        strcpy(prenume,prenume1);
    }
    void setemail(const char* email1)
    {
        delete[] email;
        email=new char[(strlen(email1)+1)];
        strcpy(email,email1);
    }
    void setnrtel(char nr_telefon1[])
    {
        strcpy(nr_telefon,nr_telefon1);
    }
    void setgrupa(int grupa1)
    {
        grupa=grupa1;
    }
    void setvarsta(int varsta1)
    {
        varsta=varsta1;
    }
    void setesef(bool sef_grupa1)
    {
        sef_grupa=sef_grupa1;
    }
    void afis();
    friend istream& operator>>(istream& in, Student& s);
    friend ostream& operator<<(ostream& os, const Student& s);
    Student& operator=(const Student& s);
    int getgrupa();
    void adauganota(int nota){
        note.adauganota(nota);
    }
    void afisnote(){
    note.afisnote();
    }
    ~Student()
    {
        delete[] nume;
        delete[] prenume;
        delete[] email;
    }
};


#endif // STUDENT_H
