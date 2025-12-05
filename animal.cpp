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

/*   NUEVA FUNCIÓN mostrarEstado
Crea una variable tipo string llamada "estado".
Empieza con un texto y muestra el nombre del animal.
Como nombre es string, se puede concatenar con " + " */

string Animal::mostrarEstado() {
    string estado = "\n\tEstado del animal\n  nombre: " + nombre + "\n";
    
    //(+=) significa “agregar al final de lo que ya tiene este string”
    estado += "Maximo por comida/agua <100>\n";
    
    //Como felicidad y hambre es un int, utilizamos
    estado += "Hambre: " + to_string(hambre) + "\n";
    estado += "Sed: " + to_string(sed) + "\n";
    
    //El "to_string()" Convierte números a texto
    estado += "Felicidad: " + to_string(felicidad) + "\n";
    
    //Regresa el mensaje al main
    return estado;

}


//      NUEVA FUNCIÓN alimentar
void Animal::alimentar() {
    
    //Las variables son enteros que son comida y agua
    int comida, agua;
    
    //IMprime el Estado que es la funcion de arriba
    cout << mostrarEstado();
    
    cout << "Cuanta comida quieres darle? ";
    cin >> comida;

    cout << "Cuanta agua quieres darle? ";
    cin >> agua;
    //Los setters de la funcion para pedirlos
    setHambre(hambre + comida);
    setSed(sed + agua);
    setFelicidad(felicidad + 10);
    
    //Muestra el nuevo estado con un cout
    cout << "\n--- Nuevo estado después de alimentar ---\n";
    cout << mostrarEstado();
}
