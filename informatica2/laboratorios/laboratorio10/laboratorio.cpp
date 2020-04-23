/*
Universidad del Istmo
Facultad de Ingenieria
Informatica II
Prof. Ernesto Rodriguez <erodriguez@unis.edu>
Laboratorio #10
*/

/*
Instrucciones: En esta taria usted tendra que utilizar herencia para definir clases
que modelan el comportamiento de 3 aviones: Concorde, A320 y EMB-120. Todos los
modelos de avion deben heredar de una clase general llamada avion.
*/

/*
Tarea #1 (50%): Defina la clase avion que debe tener lo siguietne:

* Un metodo llamado "acelerar" el cual acepta un numero y aumeta
  o reduce la velocidad por dicho numero si es possible. Retorna
  true si la velocidad fue cambiada y false de lo contrario.
* Una variable protegida llamada "eficiencia", esta variable cambia
  cuando el avion cambia su altura segun los detalles especificos
  de cada modelo.
* Un metodo llamado "ascender" que debe aceptar una altitud en pies
  y retornar true si el ascenco es possible o false de lo contrario.
* Un metodo llamado "getConsumoActual" el cual debe retornar el consumo
  de gasolina del avion. Este consumo es la "eficiencia" multiplicado
  por la velocidad del avion.
*/

/*
Tarea #2 (50%): Defina clases especificas para cada uno de los 3 modelos
de avion. A continuacion se muestra una tabla con los detalles
tecnicos de los aviones:

Concorde
    Altura maxima: 60,000 pies
    Velocidad maxima: 2350 km/h
    Eficiencia:
        50,000 - 60,000: 1.0
        40,000 - 49,999: 1.5
        30,000 - 39,999: 2
        0      - 29,999: 4

A320
    Altura maxima: 40,000 pies
    Velocidad maxima: 950 km/h
    Eficiencia:
        30,000 - 40,000: 1.0
        20,000 - 29,999: 1.3
        0      - 19,999: 2

EMB-130:
    Altura maxima: 30,000 pies
    Velocidad maxima: 500 km/h
    Eficiencia:
        15,000 - 30,000: 1.0
        5,000  - 14,999: 1.2
        0      -  4,999: 1.7

*/
