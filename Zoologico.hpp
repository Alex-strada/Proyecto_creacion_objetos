//
//  zoo.hpp
//  
//
//  Created by Alejandro Estrada Pérez on 28/11/25.
//

#ifndef ZOOLOGICO_HPP
#define ZOOLOGICO_HPP

#include "animal.hpp"

class Zoologico {
private:
    Animal* animales[10];   // Arreglo estático
    int count;              // Cantidad actual de animales

public:
    Zoologico();

    void agregarAnimal(Animal* a);     // Agregación
    void mostrarTodos() const;
    void alimentarTodos() const;
};

#endif
