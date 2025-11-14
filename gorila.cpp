//  gorila.cpp
//  Created by Alejandro Estrada Pérez on 13/11/25.
//COMPILAR: g++ -c gorila.cpp


#include <iostream>   // Permite usar cout
#include <string>     // Permite usar strings
using namespace std;

// Clase que representa un gorila
class Gorila {
private:
    string nombre;   // Nombre del gorila
    int edad;        // Edad del gorila

public:
    // Constructor: inicializa los atributos
    Gorila(string n, int e) : nombre(n), edad(e) {}

    // Método para alimentar al gorila
    void alimentar() {
        cout << "🦍 Alimentando al gorila " << nombre
             << " con hojas y frutas." << endl;
    }

    // Método que muestra la información del gorila
    void mostrar_info() {
        cout << "Gorila | Nombre: " << nombre
             << " | Edad: " << edad << " años" << endl;
    }
};
