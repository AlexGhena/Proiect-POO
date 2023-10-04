#ifndef GRUPA_H
#define GRUPA_H
#include <iostream>
#include <cstring>
#include "Student.h"
#include "Profesor.h"

template<typename T>
class Grupa
{
private:
    int nr_grupa;
    int nr_studenti, nr_profesori;
    int max_studenti, max_profesori;
    T* studenti;
    Profesor* profesori;

public:
    Grupa();
    ~Grupa();

    int get_nr_grupa() const;
    void set_nr_grupa(int nr_grupa);

    void afisare_studenti_grupa(int nr_grupa);
    void afisare_profesori_grupa(int nr_grupa);

    template<typename U>
    void adauga_profesor(U p)
    {
        if (nr_profesori < max_profesori)
        {
            profesori[nr_profesori++] = p;
        }
        else
        {
            std::cout << "Nu se mai pot adauga profesori. Grupa este plina" << std::endl;
        }
    }

    void adauga_student(T s);

    T* get_studenti() const;
    Profesor* get_profesori() const;
};

#endif // GRUPA_H
