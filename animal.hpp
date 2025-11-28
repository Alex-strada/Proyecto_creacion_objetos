//
//  animal.hpp
//  
//
//  Created by Alejandro Estrada Pérez on 21/11/25.
//
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
using namespace std;

class Animal {
protected:
    string nombre;
    int edad;

public:
    Animal(string n, int e);
    virtual ~Animal() {}

    string getNombre() const;
    int    getEdad() const;

    void setNombre(string n);
    void setEdad(int e);

    virtual string alimentar() const = 0;      // devuelve texto
    virtual string mostrar_info() const = 0;   // devuelve texto
};

#endif
