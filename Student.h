#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;

class Student {
    int wiek;
    int nr_albumu;
    string nazwisko;
    string imie;

public:
    Student(int w, int nr, string i, string n);
    string getNazwisko();
    string toString();

};



#endif //STUDENT_H
