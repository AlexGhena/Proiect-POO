#include <iostream>
#include <cstring>
#include "Student.h"
#include "Grupa.h"
#include "Profesor.h"
#include "Note.h"
#include "Statistica.h"

using namespace std;



int main()
{
    Student student,student2,student4;
    Grupa grupa(141);
    cin>>student;
    student2=student;
    Student student3(student2);
    grupa.adauga_student(student);
    grupa.adauga_student(student2);
    grupa.adauga_student(student3);
    cin>>student4; ///fata
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
    student.afisnote();
    cout<<endl;
    Student students[]={student,student2,student3};
    Statistica stats(students, 3);
    int baieti=stats.nrbaieti(141);
    int fete=stats.nrfete(141);
    cout<<baieti<<" "<<fete<<endl;
    return 0;
}
