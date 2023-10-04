#ifndef PROFESOR_POO_H
#define PROFESOR_POO_H
#include <iostream>
#include <cstring>
#include "Profesor.h"

class Profesor_POO : virtual public Profesor {
private:
    int an_studiu;
public:
    Profesor_POO() : Profesor() {
        an_studiu = 0;
    }
    Profesor_POO(char cnp[],char nume[], char prenume[], char email[], int varsta, char materie[], char nr_telefon[], int an_studiu) :
        Profesor(cnp, nume, prenume, email, varsta, materie, nr_telefon) {
        this->an_studiu = an_studiu;
    }
    int getAnStudiu() const {
        return an_studiu;
    }
    void setAnStudiu(int an_studiu) {
        this->an_studiu = an_studiu;
    }
};
#endif
