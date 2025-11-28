//  leon.cpp
//  Created by Alejandro Estrada Pérez on 13/11/25.
//  COMPILAR: g++ -c Leon.cpp



#include "leon.hpp"

Leon::Leon(string n, int e) : Animal(n, e) {}

string Leon::alimentar() const {
    return "🦁 El león " + nombre + " está comiendo carne fresca.";
}

string Leon::mostrar_info() const {
    return "León | Nombre: " + nombre + " | Edad: " + to_string(edad);
}
