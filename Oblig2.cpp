// Oblig2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <optional>
#include <span>
#include <vector>
//Decleration
std::optional<int> find_minimum(const std::vector<int>& data);

// Oppgave 1. lag en vector med verdier, send vector til funksjon find_minimum, returner minste verdi hvis ingen nullopt. 
void oppgave1() {
    //std::cout << " funksjon oppgave 1. OK\n";
    std::vector<int> vec3{};// kræsj hvis jeg prøver å sende vec3 inn i funksjon find_minumun uten verdier.
    auto minVal = find_minimum(vec3);
    if (minVal.has_value()) {
        std::cout << "minste verdi i vector: " << minVal.value();
    }
    else {
        std::cout << "Tom vector!\n";
    }

}
void oppgave2() {

}
void oppgave3() {

}

std::optional<int> find_minimum(const std::vector<int>& data){
    if (data.empty()) return std::nullopt;  // uten nullopt blir det kræsj!
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
