//
//  gorila.hpp
//  
//
//  Created by Alejandro Estrada Pérez on 13/11/25.
//

#ifndef GORILA_HPP
#define GORILA_HPP

#include "animal.hpp"

class Gorila : public Animal {
public:
    Gorila(string n, int e);

    string alimentar() const override;
    string mostrar_info() const override;
};

#endif
