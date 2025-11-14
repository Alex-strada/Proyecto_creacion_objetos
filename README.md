Proyecto ZooManager – Sistema básico de animales en C++

Este proyecto es una demostración creada como parte de la materia Pensamiento Orientado a Objetos. Su propósito es modelar animales de un zoológico mediante clases independientes en C++, mostrando cómo representar objetos reales y operar con ellos desde un programa principal.

Contexto

El proyecto simula un sistema básico de administración de animales dentro de un zoológico.
Para ello, se desarrollaron tres clases independientes, cada una representando un animal distinto:

Gorila

León

Avestruz

Cada clase contiene:

Atributos básicos como nombre y edad

Métodos para mostrar información

Métodos para alimentar al animal con mensajes específicos de su especie

No existe una clase madre ni un sistema de herencia; todas las clases son independientes y se usan desde un archivo main_zoo.cpp.

Funcionalidad

El programa permite:

Crear objetos de tipo Gorila, León y Avestruz

Mostrar la información de cada animal

Llamar a su método alimentar()

Demostrar la interacción básica entre objetos y un archivo principal en consola

El sistema funciona 100% por consola usando C++ estándar.

Consideraciones

El programa corre en cualquier sistema operativo que tenga un compilador C++ estándar.

Compilar (modo simple, usando includes en el main):
g++ main_zoo.cpp -o zoo

Compilar (modo profesional generando .o):
g++ -c gorila.cpp
g++ -c leon.cpp
g++ -c avestruz.cpp
g++ -c main_zoo.cpp
g++ gorila.o leon.o avestruz.o main_zoo.o -o zoo

Ejecutar en Linux / macOS:
./zoo

Ejecutar en Windows:
zoo.exe

