#ifndef LISTA_H
#define LISTA_H
#include "student.h"


//int x = 5;
//int* wsk_x;
//Wezel nowy(x)

class Wezel
{
    Student dane_studenta;
    Wezel *wsk_nastepny; // do powtorzenia

public:
    Wezel(Student s) : dane_studenta(s), wsk_nastepny(nullptr){} // do powtorzenia
    Wezel *getWskNastepny();
    void setWskNastepny(Wezel *n);
    Student getStudent();
};


class Lista {

    Wezel *pierwszy_element;
public:
    Lista(): pierwszy_element(nullptr){};
    void wstaw(Student s);
    Student wyszukaj_po_imieniu(string wzor_nazwiska);

};



#endif //LISTA_H
