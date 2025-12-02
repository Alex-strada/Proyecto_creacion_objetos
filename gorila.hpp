//
//  gorila.hpp
//  
//
//  Created by Alejandro Estrada Pérez on 13/11/25.
//

#ifndef GORILA_HPP
#define GORILA_HPP

#include "animal.hpp"
#include <string>

class Gorila : public Animal {
public:
    Gorila();
    Gorila(std::string n);
};

#endif
