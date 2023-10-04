#include <iostream>
#include <cstring>
#include "Student.h"
#include "Grupa.h"
#include "Profesor.h"
#include "Note.h"
#include "Statistica.h"
#include "InterfataStatistica.h"
#include "PROFESOR_LFASIPOO.h"
#include "Profesor_LFA.h"
#include "Profesor_POO.h"
#include <vector>

using namespace std;

int main()
{
    Student student,student2,student4;
    Grupa<Student> grupa;
    cin>>student;
    student2=student;
    /// URMEAZA ADAUGAREA STUDENTILOR SI A PROFESORILOR IN GRUPA
    Student student3(student2);
    grupa.adauga_student(student);
    grupa.adauga_student(student2);
    grupa.adauga_student(student3);
    grupa.set_nr_grupa(141);
    cin>>student4;
    student2.setnrmatricol(2);
    student3.setnrmatricol(3);
    Profesor prof1,prof2;
    cin>>prof1;
    prof2=prof1;
    Profesor prof3(prof2);
    grupa.adauga_profesor(prof1);
    grupa.adauga_profesor(prof2);
    grupa.adauga_profesor(prof3);
    grupa.afisare_studenti_grupa(141);
    grupa.afisare_profesori_grupa(141);
    student.adauganota(10);
    student.adauganota(5);
    student.adauganota(8);
    //student.afisnote();
    cout<<endl;
    Student students[]= {student,student2,student3};
    Statistica stats(students, 3);
    int baieti=stats.nrbaieti(141);
    int fete=stats.nrfete(141);
    cout<<"In grupa 141 se afla"<<' '<<baieti<<' '<<"baieti"<<' '<<"si"<<' '<<fete<<' '<<"fete"<<endl;
    cout << "NOTA MINIMA A STUDENTULUI ESTE: " << student.notamin() << endl;
    cout << "NOTA MAXIMA A STUDENTULUI ESTE: " << student.notamax() << endl;
    cout << "MEDIA NOTELOR STUDENTULUI ESTE: " << student.media()<<endl;
    ///CELE 4 POLIMORFISME LA EXECUTIE: (PRACTIC TOATE CERINTELE DE LA POLIMORFISM)
    InterfataStatistica* p;
    p = new Statistica(students, 3);
    p->nrbaieti(141);
    delete p;
    Student* st = new Student_Mate();
    st->adauganota(10);
    delete st;
    InterfataStatistica* p2;
    p2 = new Statistica(students, 3);
    p2->nrfete(141);
    delete p2;
    InterfataStatistica* p3 = new Statistica(students, 3); /// DOWNCASTING
    Statistica* s = dynamic_cast<Statistica*>(p3);
    if (s != nullptr)
    {
        s->nrbaieti(141);
    }
    delete p3;
    try {
        int nr_baieti = stats.nrbaieti(141);
        cout << "Numarul de baieti in grupa 141 este: " << nr_baieti << endl;
    }
    catch (const GrupaInvalida& e) {
        cout << "Grupa introdusa este invalida." << e.what() << endl;
    }
     try {
        int nr_fete = stats.nrfete(141);
        cout << "Numarul de fete in grupa 141 este: " << nr_fete << endl;
    }
    catch (const GrupaInvalida& e) {
        cout << "Grupa introdusa este invalida." << e.what() << endl;
    }
    try {
  Statistica stats(students, 3);
  int nrb = stats.nrbaieti(141);
  cout<<"Numarul de baieti din grupa 141 este: "<<nrb<<endl;
} catch (GrupaInvalida& e) {
  throw runtime_error("Eroare la calcularea numărului de băieți!");
}
Profesor_LFASIPOO DIAMANT();
return 0;
}
