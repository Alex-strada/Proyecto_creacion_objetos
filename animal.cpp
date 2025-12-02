//
//  animal.cpp
//  
//
//  Created by Alejandro Estrada Pérez on 21/11/25.
//g++ -c Animal.cpp

#include "animal.hpp"
#include <iostream>
using namespace std;

Animal::Animal() {
    nombre = "";
    hambre = 40;
    sed = 30;
    felicidad = 60;
}

Animal::Animal(string n) {
    nombre = n;
    hambre = 40;
    sed = 30;
    felicidad = 60;
}

string Animal::getNombre() { return nombre; }
int Animal::getHambre() { return hambre; }
int Animal::getSed() { return sed; }
int Animal::getFelicidad() { return felicidad; }

void Animal::setHambre(int h) {
    if (h > 100) h = 100;
    if (h < 0) h = 0;
    hambre = h;
}

void Animal::setSed(int s) {
    if (s > 100) s = 100;
    if (s < 0) s = 0;
    sed = s;
}

void Animal::setFelicidad(int f) {
    if (f > 100) f = 100;
    if (f < 0) f = 0;
    felicidad = f;
}
