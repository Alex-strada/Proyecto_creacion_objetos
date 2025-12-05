//
//  animal.hpp
//  
//
//  Created by Alejandro Estrada Pérez on 21/11/25.
//incluimos las librerias
#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>
#include <iostream>

using namespace std;

class Animal {
protected:
    std::string nombre;
    int hambre;
    int sed;
    int felicidad;

public:
    Animal();
    Animal(std::string n);


    std::string getNombre();
    int getHambre();
    int getSed();
    int getFelicidad();

    void setHambre(int h);
    void setSed(int s);
    void setFelicidad(int f);
    
    string mostrarEstado();
    void alimentar();
};

#endif
