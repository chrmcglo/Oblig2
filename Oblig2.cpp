// Oblig2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
import my_module;
#include <iostream>
#include <optional>
#include <span>
#include <vector>
//Decleration
std::optional<int> find_minimum(const std::vector<int>& data);

// Oppgave 1. lag en vector med verdier, send vector til funksjon find_minimum, returner minste verdi hvis ingen nullopt. 
void oppgave1() {
    std::vector<int> vec3{ 2,4,5,34,3 };// kræsj hvis jeg prøver å sende vec3 inn i funksjon find_minumun uten verdier.
    for (int value : vec3) { 
    }
    auto minVal = find_minimum(vec3);
    if (minVal.has_value()) {
        std::cout << "minste verdi i vector: 2,4,5,34,3 er: " << minVal.value() << std::endl;
    }
    else {
        std::cout << "Tom vector!\n";
    }

}
// bruk av Template

void oppgave2() {
    int a{};
    int b{};
    double d1{};
    double d2{};
    std::cout << "oppgi to Heltall\n";
    std::cin >> a >> b;
    std::cout << "Oppgi to Desimaltall\n";
    std::cin >> d1 >> d2;
    std::cout << "Heltall utregning: " << utregning(a, b) << std::endl;
    std::cout << "Desimaltall utregning: " << utregning(d1, d2);
}
void oppgave3() {
    std::vector<int> vec4{ 2,3,4,4,34,3 };
    std::vector<double> vec5{ 2.2,3.1,3.1,4.3,3.4,33,3 };
    int myarray[6] = { 1,2,3,4,5,5 };
    std::cout << "Funnet i int vec! like!: " << count(vec4) << std::endl;
    std::cout << "Funnet i double vec!: " << count(vec5) << std::endl;;
    std::cout << "Funnet i MyArray!: " << count(myarray, 5) << std::endl;;
}

std::optional<int> find_minimum(const std::vector<int>& data){
    if (data.empty()) return std::nullopt;  // uten nullopt blir det kræsj!
    int minimum{ data[0] };
    
    for (auto value : data) {
      if (minimum > value) {
          minimum = value;
      }
    }
    return minimum;
}

int main()
{
    int valg;
    std::cout << "Hvilken oppgave?\n Oppgave 1\n Oppgave 2\n Oppgave 3\n Valg:";
    //std::cout << my_function() << std::endl;
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
