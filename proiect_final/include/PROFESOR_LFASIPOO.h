#ifndef PROFESOR_LFASIPOO_H
#define PROFESOR_LFASIPOO_H

#include "Profesor_LFA.h"
#include "Profesor_POO.h"
#include "Profesor.h"

class Profesor_LFASIPOO : public Profesor_LFA, public Profesor_POO {
public:
    Profesor_LFASIPOO(char cnp[], char nume[], char prenume[], char email[], int varsta, char materie[], char nr_telefon[], int grupa){
    strcpy(this->cnp,cnp);
    strcpy(this->nume,nume);
    strcpy(this->prenume,prenume);
    strcpy(this->email,email);
    this->varsta=varsta;
    this->grupa=grupa;
    strcpy(this->materie,materie);
    strcpy(this->nr_telefon,nr_telefon);
    this->studenti=studenti;
    }
    virtual ~Profesor_LFASIPOO() {}
};

#endif // PROFESOR_LFASIPOO_H
