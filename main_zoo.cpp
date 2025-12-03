//  main_zoo.cpp
//  COMPILAR INDIVIDUAL: g++ -c main_zoo.cpp
//  COMPILAR TODOS: g++ animal.cpp gorila.cpp leon.cpp avestruz.cpp visitante.cpp Zoologico.cpp main_zoo.cpp -o zoo
//  ENLAZAR TODOS: g++ animal.o gorila.o leon.o avestruz.o visitante.o Zoologico.o main_zoo.o -o zoo
//  EJECUTAR TODO EL PROGRAMA: ./zoo
//  Created by Alejandro Estrada Pérez on 13/11/25.

#include <iostream>
#include <string>
using namespace std;

#include "animal.hpp"
#include "gorila.hpp"
#include "leon.hpp"
#include "avestruz.hpp"
#include "visitante.hpp"

void mostrarEstado(Animal &a) {
    cout << "\nEstado del animal:\n";
    cout << "El maximo para darle de comida y agua es de <100>";
    cout << "Hambre: " << a.getHambre() << endl;
    cout << "Sed: " << a.getSed() << endl;
    cout << "Felicidad: " << a.getFelicidad() << endl;
}

void alimentarAnimal(Animal &a) {
    int comida, agua;
    mostrarEstado(a);
    cout << "Cuanta comida quieres darle? ";
    cin >> comida;

    cout << "Cuanta agua quieres darle? ";
    cin >> agua;

    a.setHambre(a.getHambre() + comida);
    a.setSed(a.getSed() + agua);
    a.setFelicidad(a.getFelicidad() + 10);

    mostrarEstado(a);
}

int main() {
    Visitante v;

    Gorila g("King Kong");
    Leon l("Simba");
    Avestruz av("Rappi Dash");

    char opcionMenu;
    cout << "--------------------------------------\n";
    cout << "------- BIENVENIDO AL ZOOLÓGICO ------\n";
    cout << "--------------------------------------\n";

    while (true) {
        cout << "\nMENU PRINCIPAL:\n";
        cout << "------------------\n";
        cout << "a) Comprar souvenirs\n";
        cout << "b) Alimentar un animal\n";
        cout << "c) Salir\n";
        cout << "Elige una opción: ";
        cin >> opcionMenu;

        if (opcionMenu == 'A' || opcionMenu == 'a') {
            cout << "\nTu dinero actual: $" << v.getDinero() << endl;

            char seguirComprando = 'S';

             while (seguirComprando == 'S' || seguirComprando == 's') {
                cout << "\nTIENDA DE SOUVENIRS\n";
                cout << "a) Peluche de Leon: $120\n";
                cout << "b) Peluche de Gorila: $150\n";
                cout << "b) Avestruz mini: $90\n";
                cout << "d) Llavero: $40\n";
                cout << "e) Gorra Zoo: $80\n";
                cout << "f) Para salir (f) \n";
                cout << "Elige una opción: ";

                char articulo;
                cin >> articulo;
                
                
                int precio = 0;

                if (articulo == 'A' || articulo == 'a') precio = 120;
                else if (articulo == 'B' || articulo == 'b') precio = 150;
                else if (articulo == 'C' || articulo == 'c') precio = 90;
                else if (articulo == 'D' || articulo == 'd') precio = 40;
                else if (articulo == 'E' || articulo == 'e') precio = 80;
                else if (articulo == 'F' || articulo == 'f')
                    seguirComprando = 'N';
                
                else {
                    cout << "Opción no valida.\n";
                    continue;
                }

                if (!v.restarDinero(precio)) {
                    cout << "No tienes suficiente dinero. Compra cancelada\n";
                } else {
                    cout << "Gracias! su dinero restante es: $" << v.getDinero() << endl;
                }

                cout << "¿Quieres seguir comprando? (S/N): ";
                cin >> seguirComprando;
            }
        }
        else if (opcionMenu == 'B' || opcionMenu == 'b') {
        cout << "\nElige el animal:\n";
        cout << "G) Gorila\n";
        cout << "L) Leon\n";
        cout << "A) Avestruz\n";
        cout << "Opción: ";
        
        char alimentar_an;
        cin >> alimentar_an;

            if (alimentar_an == 'G' || alimentar_an == 'g')
                alimentarAnimal(g);
            else if (alimentar_an == 'L' || alimentar_an == 'l')
                alimentarAnimal(l);
            else if (alimentar_an == 'A' || alimentar_an == 'a')
                alimentarAnimal(av);
            else
                cout << "Opcion incorrecta\n";
        }
        else if (opcionMenu == 'C' || opcionMenu == 'c') {
            cout << "\nGracias por visitar el ZOO!\n";
            cout <<"Regrese pronto";
            break;
        }
        else {
            cout << "Opcion no valida\n";
        }
    }

    return 0;
}
