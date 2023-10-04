#include "Profesor.h"
#include <iostream>
#include <cstring>

using namespace std;

/**
char cnp[14];
    char nume;
    char prenume;
    char email;
    int varsta;
    char materie;
    char nr_telefon[12]
*/
istream& operator>>(istream& in, Profesor& p)
{
    cout<<"CNP: "<<endl;
    in.getline(p.cnp,14);
    cout<<"Nume: "<<endl;
    in >> p.nume;
    cout<<"Prenume: "<<endl;
    in >> p.prenume;
    cout<<"Email: "<<endl;
    in >> p.email;
    cout<<"Grupa: "<<endl;
    in>>p.grupa;
    cout<<"Varsta: "<<endl;
    in>>p.varsta;
    cout<<"Materie: "<<endl;
    in >> p.materie;
    cout<<"Nr Telefon: "<<endl;
    in >> p.nr_telefon;
    return in;
}
ostream& operator<<(ostream&os, const Profesor&p){
    os<<"CNP: "<<p.cnp<<endl;
    os<<"Nume: "<<p.nume<<endl;
    os<<"Prenume: "<<p.prenume<<endl;
    os<<"Email: "<<p.email<<endl;
    os<<"Varsta: "<<p.varsta<<endl;
    os<<"Materie: "<<p.materie<<endl;
    os<<"Nr Telefon: "<<p.nr_telefon<<endl;
    return os;
}

Profesor::Profesor(const Profesor& p)
    {
        strcpy(cnp,p.cnp);
        strcpy(nume,p.nume);
        strcpy(prenume,p.prenume);
        strcpy(email,p.email);
        varsta=p.varsta;
        grupa=p.grupa;
        strcpy(materie,p.materie);
        strcpy(nr_telefon,p.nr_telefon);
    }
Profesor& Profesor::operator=(const Profesor& p){
strcpy(cnp,p.cnp);
        strcpy(nume,p.nume);
        strcpy(prenume,p.prenume);
        strcpy(email,p.email);
        varsta=p.varsta;
        grupa=p.grupa;
        strcpy(materie,p.materie);
        strcpy(nr_telefon,p.nr_telefon);
        return *this;

}

int Profesor::getgrupa(){
    return grupa;
}
