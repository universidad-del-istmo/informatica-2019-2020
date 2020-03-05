/*
Laboratorio #6
Fecha de entrega: Jueves 19 de Marzo, 11:59pm

Instrucciones: Resuelva los problemas que se le presentan
a continuacion. Ya se le han proveido parte de las respuestas.
Su trabajo es completar lo que hace falta en cada uno de los
incisos.
*/

#include <iostream>

/*
Una lista encadenada es una forma diferente a un arreglo
para representar una lista de valores. Esta lista se define
mediante el struct "Lista". Ese struct tiene un elemento
llamado "valor" que corresponde a uno de los valores en
la lista y el elemento llamado "resto" que es un puntero
que apunta a la lista con el siguiente valor. En caso
de estar en el ultimo valor de la lista, el elemento
"resto" tendra como valor "nullptr". El valor "nullptr"
es un valor especial en C++ que se refiere a un puntero
que no apunta a ningun lugar en memoria.

Vease la funcion "main" al final de este programa para
entender como se crean instancias de este struct. Debe untilizar
este struct para resolver los proximos ejercicios.
*/
struct Lista {
    int valor;
    Lista* resto;
};

/*
Problema 1 (10%)

Defina la funcion "crear" que toma un arreglo de numeros (y su tamaño).
Esta funcion debe retornar un puntero a una "Lista" que tiene los
valores que se le han pasado en el arreglo.
*/

Lista* crear(const int* valores, const int cantidad);

/*
Problema 2 (10%)

Defina la funcion "eliminar" esta funcion acepta un puntero a una
"Lista" y debe eliminar esta lista de memoria. Asegurese que sean
eliminados *todos* los elementos de la lista, no solo el primero.
Tambien debe asegurares que toda la memoria ocupada por la lista
sea liberada.
*/
void eliminar(Lista* valores);

/*
Problema 3 (10%)

Defina la funcion "unir". Esta funcion acepta dos instancias de
"Lista" y debe unir la segunda al final de la primera. En otras palabras,
el ultimo "resto" de la primera lista debe apuntar a la segunda lista
en vez de apuntar a "nullptr"
*/

void unir(Lista* primera, Lista* segunda);

/*
Problema 4 (10%)

Defina la funcion "longitud" que determina el numero de elementos
que tiene la lista que se ha pasado como parametro.
*/
int longitud(const Lista* valores);

/*
Problema 5 (20%)

Defina la funcion "lookup" que acepta un inidce (0,1,2,ect) y busca
el elemento que esta ubicado en dicho indice. Si el elemento existe,
se debe almacenar en la variable "resultado" que se dio como parametro
y retornar "true", de lo contrario, retornar "false".
*/

bool lookup(const Lista* valores, const int indice, int& resultado);

/*
Problema 6 (20%)

Defina un struct llamado "Triangulo" para representar triangulos
de *dos dimensiones* (triangulos planos). Luego cree una nueva
lista llamada ListaTriangulos para representar una lista que tiene
triangulos.
*/

struct Triangulo{};

struct ListaTriangulos{};

/*
Problema 7 (10%)

Defina una funcion llamada "area" que dado un triangulo, calcula
el area de dicho triangulo.
*/
float area(const Triangulo& triangulo);

/*
Problema 8 (10%)

Defina la funcion "areaPromedio" que dada una lista de triangulos
calcula el area promedio de esos triangulos.
*/

float areaPromedio(const ListaTriangulos* triangulos);

using namespace std;

int main()
{
    
    Lista lista;
    lista.valor = 1;
    lista.resto = (Lista*) malloc(sizeof(Lista));
    
    lista.resto->valor = 2;
    lista.resto->resto = nullptr;
    
    cout<<"Hello World: " << lista.valor << " y " << lista.resto->valor;

    return 0;
}
