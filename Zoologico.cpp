//
//  g++ -c zoo.cpp 

//  
//
//  Created by Alejandro Estrada Pérez on 28/11/25.
//
#include "Zoologico.hpp"
#include <iostream>
using namespace std;

Zoologico::Zoologico() : count(0) {}

void Zoologico::agregarAnimal(Animal* a) {
    if (count < 10) {
        animales[count] = a;
        count++;
    } else {
        cout << "El zoológico está lleno.\n";
    }
}

void Zoologico::mostrarTodos() const {
    for (int i = 0; i < count; i++) {
        cout << animales[i]->mostrar_info() << endl;
    }
}

void Zoologico::alimentarTodos() const {
    for (int i = 0; i < count; i++) {
        cout << animales[i]->alimentar() << endl;
    }
}
