# Proyecto **ZooManager** – Sistema básico de animales en C++

Este proyecto forma parte de la materia *Pensamiento Orientado a Objetos* y modela animales de un zoológico mediante clases en C++.

---

## Contexto

El proyecto simula un sistema básico de administración de animales dentro de un zoológico.

Se desarrollaron tres clases que heredan a la clase Animal, cada una representando un animal distinto (Gorila, León, Avestruz):

- **Gorila**
- **León**
- **Avestruz**

- **Animal**

Cada clase incluye:

- Atributos básicos como nombre y edad  
- Métodos para mostrar información  
- Métodos para alimentar al animal con un mensaje específico de su especie  

---

## 📌 Funcionalidad del Programa

##    Menu Principal

El programa muestra:

===== BIENVENIDO AL ZOOLÓGICO =====
A) Comprar souvenirs
B) Alimentar un animal
C) Salir

El usuario puede:

##  A) Comprar souvenirs

- El visitante inicia con $500.
- Puede elegir entre 5 souvenirs diferentes.
- Cada compra descuenta dinero.
- Si no tiene suficiente dinero, se cancela la compra.
- Después de cada compra, puede decidir seguir comprando o salir.

## 🍗 B) Alimentar un animal

Puede elegir entre:

- Gorila
- León
- Avestruz

Luego se pide:

- ¿Cuánta comida darle?
- ¿Cuánta agua darle?

Los niveles del animal aumentan:

- Hambre += comida
- Sed += agua
- Felicidad += 10
- Los valores siempre se mantienen entre 0 y 100.

## 🚪 C) Salir

Termina el programa.
El sistema funciona completamente por consola usando C++ estándar.


' =============================
'        CLASE ANIMAL
' =============================
class Animal {
    - nombre : string
    - hambre : int
    - sed : int
    - felicidad : int

    + Animal()
    + Animal(nombre : string)

    + getNombre() : string
    + getHambre() : int
    + getSed() : int
    + getFelicidad() : int

    + setHambre(h : int)
    + setSed(s : int)
    + setFelicidad(f : int)
}

' =============================
'   CLASES DERIVADAS
' =============================
class Gorila {
    + Gorila()
    + Gorila(nombre : string)
}

class Leon {
    + Leon()
    + Leon(nombre : string)
}

class Avestruz {
    + Avestruz()
    + Avestruz(nombre : string)
}

' HERENCIA
Animal <|-- Gorila
Animal <|-- Leon
Animal <|-- Avestruz


' =============================
'      CLASE ZOOLOGICO
' =============================
class Zoologico {
    + gorilas : Gorila[3]
    + leones : Leon[3]
    + avestruces : Avestruz[3]

    + Zoologico()
}

' COMPOSICIÓN
Zoologico *-- Gorila
Zoologico *-- Leon
Zoologico *-- Avestruz


' =============================
'        CLASE VISITANTE
' =============================
class Visitante {
    - dinero : int

    + Visitante()
    + getDinero() : int
    + restarDinero(monto : int) : bool
}

# UML
<img width="1544" height="1514" alt="image" src="https://github.com/user-attachments/assets/3ca39a0c-01db-428c-923f-9a46820a2d98" />



## Compilación y ejecución


### Compilación Todos

g++ animal.cpp gorila.cpp leon.cpp avestruz.cpp visitante.cpp Zoologico.cpp main_zoo.cpp -o zoo

### ENLAZAR TODOS

g++ animal.o gorila.o leon.o avestruz.o visitante.o Zoologico.o main_zoo.o -o zoo

### Ejecutar todo el programa

**En macOS 
./zoo


