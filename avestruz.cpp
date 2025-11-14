//  avestruz.cpp
//  COMPILAR: g++ -c avestruz.cpp
//  Created by Alejandro Estrada Pérez on 13/11/25.


#include <iostream>
#include <string>
using namespace std;

// Clase que representa un avestruz
class Avestruz {
private:
    string nombre;  // Nombre del avestruz
    int edad;       // Edad del avestruz

public:
    // Constructor que inicializa los atributos
    Avestruz(string n, int e) : nombre(n), edad(e) {}

    // Método para alimentar al avestruz
    void alimentar() {
        cout << "🦤 Alimentando al avestruz " << nombre
             << " con granos y vegetales." << endl;
    }

    // Muestra la información del avestruz
    void mostrar_info() {
        cout << "Avestruz | Nombre: " << nombre
             << " | Edad: " << edad << " años" << endl;
    }
};
