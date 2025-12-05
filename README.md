# Proyecto **ZooManager** – Sistema básico de animales en C++

Este proyecto forma parte de la materia *Pensamiento Orientado a Objetos* y modela animales de un zoológico mediante clases en C++.

---
## Las subcompetencias que quiero que se evaluen son las siguientes:

- *Avance 1*
- "Codifico métodos y atributos de clase correctamente. (constructores, getters, setters) Avance 1"
-"Compruebo el acceso a los atributos y métodos de la clase (encapsulamiento correcto, mando a llamar los objetos de forma útil). Avance 1"
-"Cumplo con estándares en mi repositorio: tiene un readme claro que explica el proyecto  (para que sirve,  para que no sirve y como se usa), no tiene archivos basura o versiones pasadas. Avance 1"
-"Uso una herramienta para control de versiones (github) Avance 1"
- *Avance 2*
- "Modelo un diagrama de clase útil para solucionar un problema utilizando UML.
Avance 2"
- *Avence 3*
- "Utilizo el concepto de composición (o agreagación) en el diagrama de clases. Avance 3"
-"Implemento las clases en c++ siguiendo el diseño del diagrama de clases en UML. Avance 3"
-"Implemento herencia de manera correcta y util Avance 3"
-"Impemento composición (o agregación) sieguiendo mi diagrama de clases Avance 3"
-"Implemento clases apegadas a requerimientos a partir de un modelo. Avance 3"
-"Sigo estándares en todo mi código fuente: estilo, sangrías, comentarios, nombres, etc... Avance 3"

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



# UML
<img width="1224" height="1570" alt="image" src="https://github.com/user-attachments/assets/c1c12db3-a6aa-48c8-98a7-a32bc6f01c82" />



## Compilación y ejecución


### Compilación Todos

g++ animal.cpp gorila.cpp leon.cpp avestruz.cpp visitante.cpp Zoologico.cpp main_zoo.cpp -o zoo

### ENLAZAR TODOS

g++ animal.o gorila.o leon.o avestruz.o visitante.o Zoologico.o main_zoo.o -o zoo

### Ejecutar todo el programa

**En macOS 
./zoo


