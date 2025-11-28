//
//  animal.cpp
//  
//
//  Created by Alejandro Estrada Pérez on 21/11/25.
//g++ -c Animal.cpp

#include "animal.hpp"

Animal::Animal(string n, int e) : nombre(n), edad(e) {}

string Animal::getNombre() const { return nombre; }
int    Animal::getEdad()   const { return edad; }

void Animal::setNombre(string n) { nombre = n; }
void Animal::setEdad(int e) { edad = e; }
