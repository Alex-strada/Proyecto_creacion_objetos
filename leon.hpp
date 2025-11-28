//
//  leon.hpp
//  
//
//  Created by Alejandro Estrada Pérez on 13/11/25.
//

#ifndef LEON_HPP
#define LEON_HPP

#include "animal.hpp"

class Leon : public Animal {
public:
    Leon(string n, int e);

    string alimentar() const override;
    string mostrar_info() const override;
};

#endif
