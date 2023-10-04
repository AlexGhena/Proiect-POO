#include "Grupa.h"
#include <iostream>
#include "Student.h"
#include "Profesor.h"

template<typename T>
Grupa<T>::Grupa()
{
    nr_grupa = 0;
    nr_studenti = 0;
    nr_profesori = 0;
    max_studenti = 50;
    max_profesori = 50;
    studenti = new T[max_studenti];
    profesori = new Profesor[max_profesori];
}

template<typename T>
Grupa<T>::~Grupa()
{
    delete[] studenti;
    delete[] profesori;
}

template<typename T>
void Grupa<T>::afisare_studenti_grupa(int nr_grupa)
{
    for (int i = 0; i < nr_studenti; i++)
    {
        if (studenti[i].getgrupa() == nr_grupa)
        {
            std::cout << studenti[i] << std::endl;
        }
    }
}

template<typename T>
void Grupa<T>::afisare_profesori_grupa(int nr_grupa)
{
    for (int i = 0; i < nr_profesori; i++)
    {
        if (profesori[i].getgrupa() == nr_grupa)
        {
            std::cout << profesori[i].getnume() << " " << profesori[i].getprenume() << std::endl;
        }
    }
}

template<typename T>
void Grupa<T>::adauga_student(T s)
{
    if (nr_studenti < max_studenti)
    {
        studenti[nr_studenti++] = s;
    }
    else
    {
        std::cout << "Grupa este plina" << std::endl;
    }
}
template<typename T>
void Grupa<T>::set_nr_grupa(int nr_grupa)
{
    this->nr_grupa = nr_grupa;
}


// Explicit instantiation of the Grupa class for the Student and Profesor types
template class Grupa<Student>;
template class Grupa<Profesor>;
