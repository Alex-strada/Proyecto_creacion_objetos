//  gorila.cpp
//  Created by Alejandro Estrada Pérez on 13/11/25.
//COMPILAR: g++ -c Gorila.cpp


#include "gorila.hpp"

Gorila::Gorila(string n, int e) : Animal(n, e) {}

string Gorila::alimentar() const {
    return "🦍 El gorila " + nombre + " está comiendo hojas y frutas.";
}

string Gorila::mostrar_info() const {
    return "Gorila | Nombre: " + nombre + " | Edad: " + to_string(edad);
}

