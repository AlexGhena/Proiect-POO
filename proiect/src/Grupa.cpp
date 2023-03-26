#include "Grupa.h"
#include <iostream>
#include "Student.h"
#include "Profesor.h"

using namespace std;

void Grupa::afisare_studenti_grupa(int nr_grupa){

for(int i=0;i<nr_studenti;i++)
if(studenti[i].getgrupa()==nr_grupa){
        cout<<studenti[i].getnrmatricol()<<" "<<studenti[i].getnume()<<" "<<studenti[i].getprenume()<<endl;
}
}
void Grupa::afisare_profesori_grupa(int nr_grupa){

for(int i=0;i<nr_profesori;i++)
    if(profesori[i].getgrupa()==nr_grupa)
        cout<<profesori[i].getnume()<<" "<<profesori[i].getprenume()<<endl;

}

