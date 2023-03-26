#ifndef NOTE_H
#define NOTE_H

#include <iostream>
using namespace std;


class Note
{
private:
    int note[10];
    int nr_note;

public:
    Note() {
        nr_note = 0;
        for(int i=0;i<10;i++)
            note[i]=0;
    }

    void adauganota(int nota) {
        if(nr_note < 10) {
            note[nr_note] = nota;
            nr_note++;
        }
    }

    void afisnote() const {
        for(int i=0;i<nr_note;i++) {
            cout << note[i] << " ";
        }
        cout <<endl;
    }
};

#endif // NOTE_H
