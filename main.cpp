#include "cosmetic_product.h"
#include <iostream>
using namespace std;

int main() {
    cout << "\n Множинне успадкування \n";
    CosmeticProduct* cosmetic = new CosmeticProduct("C001", "L'Oreal", "Франція", "Помада", 250);
    cosmetic->DisplayInfo();
    delete cosmetic;

    cout << "\n Ромбоподібне успадкування \n";
    LuxuryProduct* luxury = new LuxuryProduct("L001", "Хайлайтер", 50.0, "3D-ефект");
    luxury->DisplayLuxury();
    delete luxury;


    cout << "\n  Успадкування 3 батьківських класів \n";
    FullProduct* full = new FullProduct( "L001", "L'Oreal","Англія","Червоний", "Помада", 250) ;
    full->DisplayFullInfo();
    delete full;


    return 0;
}