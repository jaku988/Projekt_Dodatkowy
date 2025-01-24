#include "Lista.h"

Wezel* Wezel::getWskNastepny()
{
    return wsk_nastepny;
}

void Wezel::setWskNastepny(Wezel* n)
{
    wsk_nastepny = n;
}

Student Wezel::getStudent()
{
    return dane_studenta;
}



void Lista::wstaw(Student s)
{
    Wezel *nowy = new Wezel(s);
    if(pierwszy_element == nullptr)
    {
        pierwszy_element = nowy;
    }
    else
    {
        Wezel *biegacz = pierwszy_element;
        while(biegacz->getWskNastepny() != nullptr)
        {
            biegacz = biegacz->getWskNastepny();
        }
        biegacz->setWskNastepny(nowy);
    }
}

Student Lista::wyszukaj_po_imieniu(string wzor_nazwiska)
{
    Wezel *biegacz = pierwszy_element;
    while(biegacz->getWskNastepny() != nullptr)
    {
        if(biegacz->getStudent().getNazwisko() == wzor_nazwiska)
        {
            return biegacz->getStudent();
        }
        biegacz = biegacz->getWskNastepny();
    }
    return Student(NULL, NULL, NULL, NULL);
}


