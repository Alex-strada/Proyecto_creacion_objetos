//
//  visitante.hpp
//  
//
//  Created by Alejandro Estrada Pérez on 02/12/25.
//
#ifndef VISITANTE_HPP
#define VISITANTE_HPP

class Visitante {
private:
    int dinero;

public:
    Visitante();          // Constructor
    int getDinero();      // Regresa dinero actual
    bool restarDinero(int cantidad);  // Regresa true si se pudo pagar
};

#endif
