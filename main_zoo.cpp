//  main_zoo.cpp
//  COMPILAR INDIVIDUAL: g++ -c main_zoo.cpp
//  COMPILAR TODOS: g++ animal.cpp gorila.cpp leon.cpp avestruz.cpp visitante.cpp Zoologico.cpp main_zoo.cpp -o zoo
//  ENLAZAR TODOS: g++ animal.o gorila.o leon.o avestruz.o visitante.o Zoologico.o main_zoo.o -o zoo
//  EJECUTAR TODO EL PROGRAMA: ./zoo
//  Created by Alejandro Estrada Pérez on 13/11/25.

#include <iostream>
#include <string>
using namespace std;

// Incluyo nuestras clases
#include "animal.hpp"
#include "gorila.hpp"
#include "leon.hpp"
#include "avestruz.hpp"
#include "visitante.hpp"


//               MAIN DEL ZOOLOGICO

int main() {

    //creo el visitante con $500 (definido en el constructor)
    Visitante v;

    //Creo un gorila, leon y avestruz con nombre inicial
    Gorila g("King Kong");
    Leon l("Simba");
    Avestruz av("Rappi Dash");

    char opcionMenu; //Variable que guarda la opción del menú principal

    // Mensaje de bienvenida
    cout << "--------------------------------------\n";
    cout << "------- BIENVENIDO AL ZOOLÓGICO ------\n";
    cout << "--------------------------------------\n";

    //  BUCLE WHILE PRINCIPAL
    while (true) {

    //Se muestra el menú principal cada vez que el ciclo inicia
    cout << "\nMENU PRINCIPAL:\n";
    cout << "------------------\n";
    cout << "a) Comprar souvenirs\n";
    cout << "b) Alimentar un animal\n";
    cout << "c) Salir\n";
    cout << "Elige una opción: ";
    cin >> opcionMenu;

      
    // OPCIÓN A → COMPRAR SOUVENIRS
      
        if (opcionMenu == 'A' || opcionMenu == 'a') {

            //Mostramos dinero actual del visitante
            cout << "\nTu dinero actual: $" << v.getDinero() << endl;

            //Variable que controla si sigue comprando
            char seguirComprando = 'S';

            //Bucle interno de compra
            while (seguirComprando == 'S' || seguirComprando == 's') {

            cout << "\nTIENDA DE SOUVENIRS\n";
            cout << "a) Peluche de Leon: $120\n";
            cout << "b) Peluche de Gorila: $150\n";
            cout << "c) Avestruz mini: $90\n";
            cout << "d) Llavero: $40\n";
            cout << "e) Gorra Zoo: $80\n";
            cout << "f) Salir de la tienda\n";
            cout << "Elige una opción: ";

            char articulo;
            cin >> articulo;

            int precio = 0;   //Variable que guardará el precio elegido

                //Dependiendo la letra es el articulo con un precio
            if (articulo == 'A' || articulo == 'a') precio = 120;
            else if (articulo == 'B' || articulo == 'b') precio = 150;
            else if (articulo == 'C' || articulo == 'c') precio = 90;
            else if (articulo == 'D' || articulo == 'd') precio = 40;
            else if (articulo == 'E' || articulo == 'e') precio = 80;

            //Si selecciona "f" se sale de la tienda
            else if (articulo == 'F' || articulo == 'f') {
                cout << "\nSaliendo de la tienda...\n";
            break; //  Este break solo sale del bucle de compras
            }

            else {
                cout << "Opcion no valida.\n";
                continue; //Regresa al menú de compras
            }

                // restamos el dinero (restarDinero devuelve bool) un boleano (si/no)
                if (!v.restarDinero(precio)) {
                    //Si es falso, no tiene dinero
                    cout << "No tienes suficiente dinero. Compra cancelada\n";
                }
                else {
                    //si es suficiente dinero usarmos el getter de Dinero para devolverlo y se imprime
                    cout << "Gracias! Su dinero restante es: $"
                         << v.getDinero() << endl;
                }

                //Preguntamos si quiere seguir comprando
                cout << "¿Quieres seguir comprando? (S/N): ";
                cin >> seguirComprando;
          }
        }

        // opcion b alimentar al animal
        
        else if (opcionMenu == 'B' || opcionMenu == 'b') {

        cout << "\nElige el animal:\n";
        cout << "g) Gorila\n";
        cout << "l) Leon\n";
        cout << "a) Avestruz\n";
        cout << "Opción: ";
        //variable de alimentar animal
        char alimentar_an;
        cin >> alimentar_an;

        //Dependiendo de la letra alimentamos al animal seleccionado
        if (alimentar_an == 'G' || alimentar_an == 'g')
                g.alimentar();

            else if (alimentar_an == 'L' || alimentar_an == 'l')
                l.alimentar();

            else if (alimentar_an == 'A' || alimentar_an == 'a')
                av.alimentar();

            else
                cout << "Opcion incorrecta\n";
        }

        // opcion "c" salir del programa
        else if (opcionMenu == 'C' || opcionMenu == 'c') {
            cout << "\nGracias por visitar el ZOO!\n";
            cout << "Regrese pronto.\n";
            break;
        }

        // Cualquier letra que no sea a, b, c
        else {
            cout << "Opción NO válida. Intenta otra vez.\n";
        }

    } //  Fin del while principal

    return 0;
}
