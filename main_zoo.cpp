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
    cout << "Hambre: " << a.getHambre() << endl;
    cout << "Sed: " << a.getSed() << endl;
    cout << "Felicidad: " << a.getFelicidad() << endl;
}

void alimentarAnimal(Animal &a) {
    int comida, agua;
    mostrarEstado(a);
    cout << "Cuánta comida quieres darle? ";
    cin >> comida;

    cout << "Cuánta agua quieres darle? ";
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

    cout << "===== BIENVENIDO AL ZOOLÓGICO =====\n";

    while (true) {
        cout << "\nMENU PRINCIPAL:\n";
        cout << "A) Comprar souvenirs\n";
        cout << "B) Alimentar un animal\n";
        cout << "C) Salir\n";
        cout << "Elige una opción: ";
        cin >> opcionMenu;

        if (opcionMenu == 'A' || opcionMenu == 'a') {
            cout << "\nTu dinero actual: $" << v.getDinero() << endl;

            char seguirComprando = 'S';

            while (seguirComprando == 'S' || seguirComprando == 's') {
                cout << "\nTIENDA DE SOUVENIRS\n";
                cout << "A) Peluche de León ($120)\n";
                cout << "B) Peluche de Gorila ($150)\n";
                cout << "C) Avestruz mini ($90)\n";
                cout << "D) Llavero ($40)\n";
                cout << "E) Gorra Zoo ($80)\n";
                cout << "Elige una opción: ";

                char articulo;
                cin >> articulo;

                int precio = 0;

                if (articulo == 'A' || articulo == 'a') precio = 120;
                else if (articulo == 'B' || articulo == 'b') precio = 150;
                else if (articulo == 'C' || articulo == 'c') precio = 90;
                else if (articulo == 'D' || articulo == 'd') precio = 40;
                else if (articulo == 'E' || articulo == 'e') precio = 80;
                else {
                    cout << "Opción inválida.\n";
                    continue;
                }

                if (!v.restarDinero(precio)) {
                    cout << "No tienes suficiente dinero. Compra cancelada.\n";
                } else {
                    cout << "Compra realizada. Dinero restante: $" << v.getDinero() << endl;
                }

                cout << "¿Quieres seguir comprando? (S/N): ";
                cin >> seguirComprando;
            }
        }
        else if (opcionMenu == 'B' || opcionMenu == 'b') {
            cout << "\nElige el animal:\n";
            cout << "A) Gorila\n";
            cout << "B) León\n";
            cout << "C) Avestruz\n";
            cout << "Opción: ";

            char aOpc;
            cin >> aOpc;

            if (aOpc == 'A' || aOpc == 'a')
                alimentarAnimal(g);
            else if (aOpc == 'B' || aOpc == 'b')
                alimentarAnimal(l);
            else if (aOpc == 'C' || aOpc == 'c')
                alimentarAnimal(av);
            else
                cout << "Opción incorrecta.\n";
        }
        else if (opcionMenu == 'C' || opcionMenu == 'c') {
            cout << "\nGracias por visitar el zoológico!\n";
            break;
        }
        else {
            cout << "Opción inválida.\n";
        }
    }

    return 0;
}
