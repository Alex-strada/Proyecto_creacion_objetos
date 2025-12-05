//
//  main_avion.cpp
//  
//
//  Created by Alejandro Estrada Pérez on 25/11/25.
//

#include <iostream>
#include "Flota.hpp"

int main() {
    Flota f;

    Avioneta a1("Avioneta A", 300, 4);
    Avioneta a2("Avioneta B", 250, 6);

    Carga c1("Cargo 1", 500, 1500.0f);
    Carga c2("Cargo 2", 600, 2000.0f);

    f.agregarAvioneta(&a1);
    f.agregarAvioneta(&a2);

    f.agregarCarga(&c1);
    f.agregarCarga(&c2);

    std::cout << "Promedio de asientos: " << f.promedioAsiento() << std::endl;
    std::cout << "Promedio capacidad de carga: " << f.promedioCarga() << std::endl;

    return 0;
}

