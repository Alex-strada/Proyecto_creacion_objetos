//  main_zoo.cpp
//  COMPILAR INDIVIDUAL: g++ -c main_zoo.cpp
//  COMPILAR TODOS: g++ Animal.cpp Gorila.cpp Leon.cpp Avestruz.cpp Zoologico.cpp main_zoo.cpp -o zoo
//  ENLAZAR TODOS: g++ Animal.o Gorila.o Leon.o Avestruz.o zoo.o main_zoo.o -o zoo
//  EJECUTAR TODO EL PROGRAMA: ./zoo
//  Created by Alejandro Estrada Pérez on 13/11/25.


#include <iostream>
using namespace std;

#include "gorila.hpp"
#include "leon.hpp"
#include "avestruz.hpp"
#include "Zoologico.hpp"

int main() {

    // Creación de animales
    Gorila g("King Kong", 12);
    Leon   l("Simba", 8);
    Avestruz a("Rappi Dash", 5);

    // Creación del zoológico
    Zoologico zoo;

    // Agregación animales (agregación)
    zoo.agregarAnimal(&g);
    zoo.agregarAnimal(&l);
    zoo.agregarAnimal(&a);

    cout << "\n--- Información de animales ---\n";
    zoo.mostrarTodos();

    cout << "\n--- Alimentando animales ---\n";
    zoo.alimentarTodos();

    return 0;
}
