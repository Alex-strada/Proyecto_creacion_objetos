//
//  visitante.cpp
//  
//
//  Created by Alejandro Estrada Pérez on 02/12/25.
//

#include "visitante.hpp"

Visitante::Visitante() {
    dinero = 500;   // saldo inicial
}

int Visitante::getDinero() {
    return dinero;
}

bool Visitante::restarDinero(int cantidad) {
    if (cantidad > dinero) {
        return false;     // No tiene suficiente dinero
    }

    dinero -= cantidad;   // Se descuenta
    return true;          // Sí se pudo pagar
}

