/*
Tarea #1 (20%)

Defina una funcion llamada "parseFloat". Esta funcion acepta un string
que tiene en ella un numero real y lo convierte a una variable de tipo
float. Por ejemplo:

std::string valor_str("435.876");
float valor = parseFloat(valor_str);

Puede asumir que siempre se le daran strings que correctamente representan
un float.
*/

/*
Tarea #2 (20%)

Defina una clase llamada Vector3d. Esta clase debe tener lo siguiente:

1) Tres variables reales internas para representar las coordenadas x,y,z
2) Un constructor que acepta un string con las tres coordenadas separadas
   por un coma e inicializa las variables internas del vector. Por ejemplo:
   std::string coords("x,y,z");
   Vector v(coords);
*/


/*
Tarea #3 (10%)

Defina un metodo llamado "distancia" en la clase Vector3d. Este metodo
acepta otro Vector3d y calcula la distancia eculideana entre si mismo
y el vector que se le dio como parametro.
*/

/*
Tarea #4 (50%)

A continuacion se le muestra un ejemplo de codigo que se puede utilizar para
leer una linea de texto de la consola y almacenar el resultado en un string.
Atencion: Este programa puede no correr en los editores web por lo cual
se recomienda que instale gcc u otro compilador para utilizarlo.

Su tarea es modificar este programa para que cumpla la siguiente funcion:

1) Debe leer varias lineas con el siguiente formato "x,y,z" en otras palabras
   3 *numeros reales* por linea.
2) Convertir cada una de las coordenadas en una instancia de Vector3d
3) Calcular la distancia que hay entre cada Vector3d y el Vector3d ingresado
   en la linea preiva.
4) Sumar todas las distancias para obtener la distancia total e imprimir
   esa distancia en la consola.
5) Repetir hasta que se ingrese una liea vacia (solo se presiona enter al solicitar la linea)

*******************************************************************************/
#include <iostream>
#include <stdio.h>
#include <string>

int main()
{
    std::string name;
    std::cout << "Ingrese su nombre\n";
    std::getline(std::cin, name);

    std::cout << "Su nombre es: " << name << "\n";

    return 0;
}
