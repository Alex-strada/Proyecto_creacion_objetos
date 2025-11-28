//
//  avestruz.hpp
//  
//
//  Created by Alejandro Estrada Pérez on 13/11/25.
//
#ifndef AVESTRUZ_HPP
#define AVESTRUZ_HPP

#include "animal.hpp"

class Avestruz : public Animal {
public:
    Avestruz(string n, int e);

    string alimentar() const override;
    string mostrar_info() const override;
};

#endif
