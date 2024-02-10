// Oblig2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <optional>
#include <span>
#include <vector>
//Decleration
int find_minimun(std::span<int> data);


// Oppgave 1. lag en vector med verdier, send vector til funksjon find_minimum, returner minste verdi hvis ingen nullopt. 
void oppgave1() {
    std::cout << " funksjon oppgave 1. OK";
    std::vector<int> vec3{ 2,4,5,34,3 };
    std::cout << find_minimun(vec3);
}
void oppgave2() {

}
void oppgave3() {

}

int find_minimun(std::span<int> data) {
    int minumun{ data[0] };
    for (auto value : data) {
      if (minumun > value) {
            minumun = value;
      }
    }
    return minumun;
}

int main()
{
    int valg;
    std::cout << "Hvilken oppgave?\n 1. Vectorer og Nullopt\n 2. Regner ut summen og pointers\n 3. Antall i en liste. \n Valg:";
    std::cin >> valg;
    switch (valg) {
    case 1:
        oppgave1();
        break;
    case 2:
        oppgave2();
        break;
    case 3:
        oppgave3();
        break;
    default:
        std::cout << "Ugyldig valg.Programmer avsluttes\n";

    }
    

}
