//
//  zoo.hpp
//  
//
//  Created by Alejandro Estrada Pérez on 28/11/25.
//

#ifndef ZOOLOGICO_HPP
#define ZOOLOGICO_HPP

#include "gorila.hpp"
#include "leon.hpp"
#include "avestruz.hpp"

class Zoologico {
public:
    Gorila gorilas[3];
    Leon leones[3];
    Avestruz avestruces[3];

    Zoologico();
};

#endif
