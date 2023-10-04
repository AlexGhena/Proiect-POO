#ifndef STUDENT_H
#define STUDENT_H
#include <cstring>
#include <iostream>
#include <vector>
#include <algorithm>
#include "Note.h"
#include <regex>

using namespace std;

class Student
{
private:
    Note note;
protected:
    int nr_matricol;
    char cnp[14];
    string nume;
    char *prenume;
    char *email;
    int varsta;
    int grupa;
    char nr_telefon[12];
    bool sef_grupa;

public:
    Student()
    {
        nr_matricol=0;
        for(int i=0; i<14; i++)
            cnp[i]='\0';
        email=new char[1];
        nume=new char[1];
        prenume=new char[1];
        varsta=0;
        grupa=0;
        sef_grupa=false;
        for(int i=0; i<12; i++)
            nr_telefon[i]='\0';
    }
    Student(int nr_matricol1, char cnp1[], char primacnp1, string nume1,char prenume1[],char email1[], int varsta1, int grupa1, char nr_telefon1[],bool sef_grupa1)
    {
        if(strlen(cnp) != 13){
            throw invalid_argument("CNP INVALID!");
        }
        prenume= new char[strlen(prenume1)+1];
        email=new char[strlen(email1)+1];
        nume=nume1;
        strcpy(prenume,prenume1);
        strcpy(email,email1);
        nr_matricol=nr_matricol1;
        strcpy(nr_telefon,nr_telefon1);
        varsta=varsta1;
        strcpy(cnp,cnp1);
        grupa=grupa1;

    }
    Student(const Student& s);
    bool validare_telefon(const char t[]){
    regex telefon_regex(R"(0+[0-9]{9})");
    return regex_match(t, telefon_regex);
    }
    //(pot sa fac la fel si pt cnp)
///GETTERI:
    int getnrmatricol() const
    {
        return nr_matricol;
    }

    const char* getcnp() const
    {
        return cnp;
    }
    const string getnume() const
    {
        return nume;
    }
    const char*getprenume() const
    {
        return prenume;
    }
    const char*getemail() const
    {
        return email;
    }
    const int getvarsta() const
    {
        return varsta;
    }
    const int getgrupa() const
    {
        return grupa;
    }
    const char* getnrtel() const
    {
        return nr_telefon;
    }
    const bool esefgrupa() const
    {
        return sef_grupa;
    }
    //int getnota(int i) const {
    //return note.getnota(i);
    //}

///SETTERI:
    void setnrmatricol(int nr_matricol1)
    {
        nr_matricol=nr_matricol1;
    }
    void setcnp(char cnp1[])
    {
        strcpy(cnp,cnp1);
    }
    void setnume(const string nume1)
    {
        //nume=new char[strlen(nume1)+1];
        nume=nume1;
    }
    void setprenume(const char* prenume1)
    {
        delete[] prenume;
        prenume=new char[(strlen(prenume1)+1)];
        strcpy(prenume,prenume1);
    }
    void setemail(const char* email1)
    {
        delete[] email;
        email=new char[(strlen(email1)+1)];
        strcpy(email,email1);
    }
    void setnrtel(char nr_telefon1[])
    {
        strcpy(nr_telefon,nr_telefon1);
    }
    void setgrupa(int grupa1)
    {
        grupa=grupa1;
    }
    void setvarsta(int varsta1)
    {
        varsta=varsta1;
    }
    void setesef(bool sef_grupa1)
    {
        sef_grupa=sef_grupa1;
    }
    void afis();
    friend istream& operator>>(istream& in, Student& s);
    friend ostream& operator<<(ostream& os, const Student& s);
    Student& operator=(const Student& s);
    int getgrupa();
    void adauganota(int nota){
        note.adauganota(nota);
    }
    void afisnote(){
    note.afisnote();
    }
    int notamin() {
    return note.min_nota();
}
    int notamax(){
    return note.max_nota();
    }
    int media(){
    return note.media();
    }


    ~Student()
    {
        //delete[] nume;
        delete[] prenume;
        delete[] email;
    }
};
class Student_Mate : public Student {
protected:
    float media;
    int an_studiu;

public:
    Student_Mate(){
    }
    Student_Mate(int nr_matricol1, char cnp1[], char primacnp1, char nume1[], char prenume1[], char email1[], int varsta1, int grupa1, char nr_telefon1[], bool sef_grupa1, float media1, int an_studiu1) :
        Student(nr_matricol1, cnp1, primacnp1, nume1, prenume1, email1, varsta1, grupa1, nr_telefon1, sef_grupa1)
    {
        media = media1;
        an_studiu = an_studiu1;
    }

    void setMedia(float med) {
        media = med;
    }
};
#endif // STUDENT_H
