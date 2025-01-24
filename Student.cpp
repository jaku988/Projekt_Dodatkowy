#include "Student.h"

string Student::getNazwisko()
{
    return nazwisko;
}

Student::Student(int w, int nr, string i, string n)
{
    wiek = w;
    nr_albumu = nr;
    imie = i;
    nazwisko = n;
}

string Student::toString()
{
    string dane_studenta = "";
    dane_studenta += "Wiek studenta: " + to_string(wiek) + '\n';
    dane_studenta += "Numer albumu studenta: " + to_string(nr_albumu) + '\n';
    dane_studenta += "Imie studenta: " + imie + '\n';
    dane_studenta += "Nazwisko studenta: " + nazwisko + '\n';

    return dane_studenta;
}
