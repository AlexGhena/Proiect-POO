#include "Student.h"
#include <iostream>

using namespace std;
istream& operator>>(istream& in, Student& s)
{
    cout<<"Numarul matricol:"<<endl;
    in>>s.nr_matricol;
    cout<<"CNP: "<<endl;
    in>>s.cnp;
    cout<<"Introduceti numele: "<<endl;
    char* nume=new char[100];
    in>>nume;
    s.setnume(nume);
    delete[] nume;
    cout<<"Introduceti prenumele: "<<endl;
    char* prenume=new char[100];
    in>>prenume;
    s.setprenume(prenume);
    delete[] prenume;
    cout<<"Introduceti email: "<<endl;
    char* email=new char[100];
    in>>email;
    s.setemail(email);
    delete[] email;
    cout << "Introduceti varsta: ";
    in >> s.varsta;

    cout << "Introduceti grupa: ";
    in >> s.grupa;

    cout << "Introduceti numarul de telefon: ";
    in >> s.nr_telefon;

    cout << "Este sef de grupa? (1 pentru da, 0 pentru nu): ";
    in >> s.sef_grupa;
    in.get();

    return in;
}

ostream& operator<<(ostream& os, const Student& s) {
os<<"Nr Matricol: "<<s.nr_matricol<<endl;
os<<"CNP: "<<s.cnp<<endl;
os<<"Nume: "<<s.nume<<endl;
os<<"Prenume: "<<s.prenume<<endl;
os<<"Email: "<<s.email<<endl;
os<<"Varsta: "<<s.varsta<<endl;
os<<"Grupa: "<<s.grupa<<endl;
os<<"Nr telefon: "<<s.nr_telefon<<endl;
if(s.esefgrupa()==true)
    os<<"Sef Grupa: DA"<<endl;
else
    os<<"Sef Grupa: NU"<<endl;
return os;

}
void Student::afis(){
cout<<"Nr Matricol:"<<getnrmatricol()<<endl;
cout<<"CNP: "<<getcnp()<<endl;
cout<<"Nume :"<<getnume()<<endl;
cout<<"Prenume: "<<getprenume()<<endl;
cout<<"email: "<<getemail()<<endl;
cout<<"Nr Telefon: "<<getnrtel()<<endl;
cout<<"Varsta: "<<getvarsta()<<endl;
cout<<"SEF GRUPA: "<<esefgrupa();
}
Student& Student::operator=(const Student&s){
    nr_matricol = s.nr_matricol;
    strcpy(cnp, s.cnp);
    delete[] nume;
    nume = new char[strlen(s.nume) + 1];
    strcpy(nume, s.nume);
    delete[] prenume;
    prenume = new char[strlen(s.prenume) + 1];
    strcpy(prenume, s.prenume);
    delete[] email;
    email = new char[strlen(s.email) + 1];
    strcpy(email, s.email);
    varsta = s.varsta;
    grupa = s.grupa;
    strcpy(nr_telefon, s.nr_telefon);
    sef_grupa = s.sef_grupa;
    return *this;

}

Student::Student(const Student& s)
    {
        nr_matricol=s.nr_matricol;
        strcpy(cnp,s.cnp);
        nume=new char[strlen(s.nume)+1];
        strcpy(nume,s.nume);
        prenume=new char[strlen(s.prenume)+1];
        strcpy(prenume,s.prenume);
        email=new char[strlen(s.email)+1];
        strcpy(email,s.email);
        varsta=s.varsta;
        grupa=s.grupa;
        strcpy(nr_telefon,s.nr_telefon);
        sef_grupa=s.sef_grupa;
    }
int Student::getgrupa(){
    return grupa;

}

