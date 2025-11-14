//  main_zoo.cpp
//  COMPILAR: g++ main_zoo.cpp -o zoo
//  EJECUTAR: ./zoo
//  ENLAZAR: g++ gorila.o leon.o avestruz.o main_zoo.o -o zoo
//  Created by Alejandro Estrada Pérez on 13/11/25.



#include <iostream>
using namespace std;

// Importamos los archivos donde están las clases
#include "gorila.cpp"
#include "leon.cpp"
#include "avestruz.cpp"

int main() {

    // Creamos un gorila con nombre y edad
    Gorila g("King Kong", 12);

    // Creamos un león
    Leon l("Simba", 8);

    // Creamos un avestruz
    Avestruz a("Rappi dash", 5);

    // Mostrar info de cada animal
    cout << "\n--- Información de los animales ---\n";
    g.mostrar_info();
    l.mostrar_info();
    a.mostrar_info();

    // Alimentar a los animales
    cout << "\n--- Alimentando animales ---\n";
    g.alimentar();
    l.alimentar();
    a.alimentar();

    return 0; // Fin del programa
}
