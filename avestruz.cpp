//  avestruz.cpp
//  COMPILAR: g++ -c Avestruz.cpp
//  Created by Alejandro Estrada Pérez on 13/11/25.


#include "avestruz.hpp"

Avestruz::Avestruz(string n, int e) : Animal(n, e) {}

string Avestruz::alimentar() const {
    return "🦤 El avestruz " + nombre + " está comiendo granos y vegetales.";
}

string Avestruz::mostrar_info() const {
    return "Avestruz | Nombre: " + nombre + " | Edad: " + to_string(edad);
}
