# Proyecto **ZooManager** – Sistema básico de animales en C++

Este proyecto forma parte de la materia *Pensamiento Orientado a Objetos* y modela animales de un zoológico mediante clases en C++.

---

## Contexto

El proyecto simula un sistema básico de administración de animales dentro de un zoológico.

Se desarrollaron tres clases independientes, cada una representando un animal distinto:

- **Gorila**
- **León**
- **Avestruz**
- **Animal**

Cada clase incluye:

- Atributos básicos como nombre y edad  
- Métodos para mostrar información  
- Métodos para alimentar al animal con un mensaje específico de su especie  

---

## Funcionalidad

El programa permite:

- Crear objetos de las clases `Animal`,`Gorila`, `Leon` y `Avestruz`
- Mostrar la información de cada animal
- Llamar a su método `alimentar()`
- Demostrar interacción básica entre objetos desde un archivo principal en consola

El sistema funciona completamente por consola usando C++ estándar.

---

## Compilación y ejecución


### Compilación Todos

g++ Animal.cpp Gorila.cpp Leon.cpp Avestruz.cpp Zoologico.cpp main_zoo.cpp -o zoo

### ENLAZAR TODOS

g++ Animal.o Gorila.o Leon.o Avestruz.o zoo.o main_zoo.o -o zoo

### Ejecutar todo el programa

**En macOS 
./zoo  


