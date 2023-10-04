#ifndef PROFESOR_LFA_H
#define PROFESOR_LFA_H
#include <iostream>
#include <cstring>
#include "Profesor.h"

class Profesor_LFA : virtual public Profesor {
private:
    int semestru;
public:
    Profesor_LFA() : Profesor() {
        semestru = 0;
    }
    Profesor_LFA(char cnp[],char nume[], char prenume[], char email[], int varsta, char materie[], char nr_telefon[], int semestru) :
        Profesor(cnp, nume, prenume, email, varsta, materie, nr_telefon) {
        this->semestru = semestru;
    }
    int getSemestru() const {
        return semestru;
    }
    void setSemestru(int semestru) {
        this->semestru = semestru;
    }

};

#endif // PROFESOR_LFA_H
