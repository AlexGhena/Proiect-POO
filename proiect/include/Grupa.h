#ifndef GRUPA_H
#define GRUPA_H
#include <iostream>
#include <cstring>
#include "Student.h"
#include "Profesor.h"


class Grupa
{
private:
    int nr_grupa;
    int nr_studenti,nr_profesori;
    int max_studenti,max_profesori;
    Student* studenti;
    Profesor* profesori;

public:
    Grupa(){
    nr_grupa=0;
    nr_studenti=0;
    max_studenti=0;
    max_profesori=0;
    studenti = new Student[max_studenti];
    profesori=new Profesor[max_profesori];
    }
    Grupa(int nr_grupa){
        this->nr_grupa=nr_grupa;
        nr_studenti=0;
        nr_profesori=0;
        max_profesori=50;
        max_studenti=50;
        studenti = new Student[max_studenti];
        profesori=new Profesor[max_profesori];
    }

int get_nr_grupa() const {
    return nr_grupa;
    }

void set_nr_grupa(int nr_grupa) {
    this->nr_grupa = nr_grupa;
}
void afisare_studenti_grupa(int nr_grupa);
void afisare_profesori_grupa(int nr_grupa);

void adauga_profesor(Profesor p){
if(nr_profesori < max_profesori){
    profesori[nr_profesori++]=p;
}
}

void adauga_student(Student s){
if(nr_studenti < max_studenti){
    studenti[nr_studenti++]=s;
}
else{
    cout<<"Grupa este plina";
}
}
Student* get_studenti() const {
return studenti;
}
Profesor* get_profesori() const{
return profesori;
}
};

#endif // GRUPA_H
