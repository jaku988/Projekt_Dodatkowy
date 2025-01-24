#include <iostream>
#include "lista.h"
using namespace std;


int main()
{
    Student s1(22, 242752, "Jakub", "Stepinski");
    Student s2(20, 10001, "Jan", "Kowalski");
    Student s3(21, 10002, "Anna", "Nowak");
    Student s4(22, 10003, "Piotr", "Wisniewski");
    Student s5(19, 10004, "Maria", "Kamińska");
    Student s6(23, 10005, "Krzysztof", "Lewandowski");
    Student s7(20, 10006, "Agnieszka", "Wojcik");
    Student s8(21, 10007, "Tomasz", "Kozlowski");
    Student s9(22, 10008, "Katarzyna", "Zielinska");
    Student s10(19, 10009, "Michal", "Szymanski");
    Student s11(24, 10010, "Joanna", "Wozniak");
    Student s12(20, 10011, "Mateusz", "Kwiatkowski");
    Student s13(21, 10012, "Ewa", "Jankowska");
    Student s14(22, 10013, "Pawel", "Mazur");
    Student s15(23, 10014, "Aleksandra", "Stepien");
    Student s16(19, 10015, "Lukasz", "Baran");
    Student s17(20, 10016, "Monika", "Duda");
    Student s18(21, 10017, "Rafal", "Adamczyk");
    Student s19(22, 10018, "Natalia", "Pawlak");
    Student s20(23, 10019, "Adrian", "Zajac");

    string wzor;
    cin >> wzor;
    Lista l;
    l.wstaw(s1);
    l.wstaw(s2);
    l.wstaw(s3);
    l.wstaw(s4);
    l.wstaw(s5);
    l.wstaw(s6);
    l.wstaw(s7);
    l.wstaw(s8);
    l.wstaw(s9);
    l.wstaw(s11);
    l.wstaw(s12);
    l.wstaw(s13);
    l.wstaw(s14);
    l.wstaw(s15);
    l.wstaw(s16);
    l.wstaw(s17);
    l.wstaw(s18);
    l.wstaw(s19);
    l.wstaw(s20);
    cout << l.wyszukaj_po_imieniu(wzor).toString();


    return 0;
}
