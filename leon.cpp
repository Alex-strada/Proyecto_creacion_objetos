//  leon.cpp
//  Created by Alejandro Estrada Pérez on 13/11/25.
//  COMPILAR: g++ -c leon.cpp


#include <iostream>
#include <string>
using namespace std;

// Clase que representa un león
class Leon {
private:
    string nombre;  // Nombre del león
    int edad;       // Edad del león

public:
    // Constructor que asigna valores a los atributos
    Leon(string n, int e) : nombre(n), edad(e) {}

    // Método para alimentar al león
    void alimentar() {
        cout << "🦁 Alimentando al león " << nombre
             << " con carne fresca." << endl;
    }

    // Muestra la información del león
    void mostrar_info() {
        cout << "León | Nombre: " << nombre
             << " | Edad: " << edad << " años" << endl;
    }
};
