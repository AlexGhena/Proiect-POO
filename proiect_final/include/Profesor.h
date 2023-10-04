#ifndef PROFESOR_H
#define PROFESOR_H
#include <iostream>
#include <cstring>
#include "Student.h"
#include "Note.h"
using namespace std;


class Profesor
{
protected:
    char cnp[14];
    char nume[50];
    char prenume[50];
    char email[50];
    int varsta;
    int grupa;
    char materie[50];
    char nr_telefon[12];
    Student* studenti;
    int nr_studenti;

public:
    Profesor(){
    for(int i=0;i<14;i++)
        cnp[i]='\0';
    nume[0]='\0';
    prenume[0]='\0';
    email[0]='\0';
    varsta=0;
    materie[0]='\0';
    grupa=0;
    for(int i=0;i<12;i++)
        nr_telefon[i]='\0';
    studenti=nullptr;
    nr_studenti=0;
    }
    Profesor(char cnp[],char nume[], char prenume[], char email[], int varsta, char materie[], char nr_telefon[]){
    strcpy(this->cnp,cnp);
    strcpy(this->nume,nume);
    strcpy(this->prenume,prenume);
    strcpy(this->email,email);
    this->varsta=varsta;
    this->grupa=grupa;
    strcpy(this->materie,materie);
    strcpy(this->nr_telefon,nr_telefon);
    this->studenti=studenti;
    this->nr_studenti=nr_studenti;

    }
   const char* getnume() const
    {
        return nume;
    }
    const char* getprenume() const
    {
        return prenume;
    }
    const int getvarsta() const{
        return varsta;
    }
    void set_varsta(int varsta) {
        if (varsta < 0) {
            throw std::out_of_range("Varsta nu poate fi negativa.");
        }
        this->varsta = varsta;
    }
friend istream& operator>>(istream& in, Profesor& p);
friend ostream& operator<<(ostream& os, const Profesor& p);
int getgrupa();
Profesor& operator=(const Profesor&p);
Profesor(const Profesor&p);
//~Profesor(){
//delete[] studenti;

};

#endif // PROFESOR_H
