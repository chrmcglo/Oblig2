// Oblig2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
import my_module;
#include <iostream>
#include <span>
#include <vector>

// Oppgave 1 Finne minste verdi i en vector.  
void oppgave1() {
    std::vector<int> vec3{ 2,4,5,34,3 };// kræsj hvis jeg prøver å sende vec3 inn i funksjon find_minumun uten verdier.
    auto minVal = find_minimum(vec3);

    if (minVal.has_value()) {
        std::cout << "Minste verdi i vec3(2, 4, 5, 34, 3): " << minVal.value() << std::endl;
    }
    else {
        std::cout << "Viktor vector er tom!\n";
    }
  }

// Oppgave 3 bruk av Template
void oppgave2() {
    int a,b{};
    double d1,d2{};
    std::cout << "Oppgi to Heltall\n"; std::cin >> a >> b;   // Sender to Heltall til "a" og "b"
    std::cout << "Oppgi to Desimaltall\n"; std::cin >> d1 >> d2; // Sender to Desimaltall til "a" og "b"
    std::cout << "Heltall utregning: " << utregning(a, b) << std::endl;  // Utfører beregning ved bruk av template og module. 
    std::cout << "Desimaltall utregning: " << utregning(d1, d2) << std::endl; // Utfører beregning ved bruk av template og module. 
}
void oppgave3() {
    std::vector<int> vec4{ 2,3,4,4,34,3 };
    std::vector<double> vec5{ 2.2,3.1,3.1,4.3,3.4,33,3 };
    int myarray[6] = { 1,2,3,4,5,5 };
    std::cout << "Funnet i int vec! like!: " << count(vec4) << std::endl;
    std::cout << "Funnet i double vec!: " << count(vec5) << std::endl;
    std::cout << "Funnet i MyArray!: " << count(myarray, 5) << std::endl;
}

void main()
{
    int valg;
    std::cout << "Hvilken oppgave?\n Oppgave 1\n Oppgave 2\n Oppgave 3\n Valg:";
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
        std::cout << "Ugyldig valg.Programmet avsluttes\n";

    }
}
