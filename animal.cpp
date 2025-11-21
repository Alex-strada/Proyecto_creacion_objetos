//
//  animal.cpp
//  
//
//  Created by Alejandro Estrada Pérez on 21/11/25.
//g++ animal.cpp -o animal


#include <iostream>
#include <string>
#include "animal.hpp"
using namespace std;

class Animal {
    
private:
    string nombre;
    int edad;

public:
    // Constructor
    Animal(string n, int e) : nombre(n), edad(e) {}

    // Métodos
    void mostrar_info() {
        cout << "Animal | Nombre: " << nombre
             << " | Edad: " << edad << " años" << endl;
    }

    void alimentar() {
        cout << nombre << " está siendo alimentado." << endl;
    }
};
