/*
Ejercicio #1 (25%)

A continuacion se le presenta la clase coleccion. La intencion
de esta clase es representar objetos que pueden almacenar varios
valores numeriocs sin adherirse a un metodo particular para
reservar la memoria.

Su tarea es definir los siguientes metodos virutales puros para
la coleccion:

* Un metodo para obtener el numero de elementos en la coleccion.
* Un metodo que permita agregar un numero al *final* de la coleccion,
  como consecuencia, el tamaño de la coleccion aumenta una unidad.
* Uno (o mas) metodos para aceder y modificar los elementos de la
  coleccion por medio de su *indice* en ella.
*/
class Coleccion {};

/*
Ejercicio #2 (25%)

Implemente los metodos puros virtuales de la clase coleccion en
la clase hija llamada "ColeccionVector". Esta clase debe utilizar
un std::vector<int> para almacenar los numeros. Todas las operaciones
de la coleccion deben ser implementadas alrededor de este vector. En
otras palabras, esta clase debe tener una variable privada de tipo
std::vector<int> para almacenar los numeros.
*/
class ColeccionVector : public Coleccion {};

/*
Ejercicio #3 (25%)

Implemente los metodos puros virtuales de la clase coleccion en
la clase hija llamada "ColeccionLinkedList". Esta clase debe utilizar
listas encadenadas (como las creadas en el laboratorio #9) para almacenar
sus elementos. Todas las operaciones de la clase "Coleccion" deben ser
implementadas alrededor de una instancia de "LinkedList".

*/
class ColeccionLinkedList : public Coleccion {};

/*
Ejercicio #4 (25%)

Implemente la funcion "ordenar" definida abajo. Esta funcion
debe aceptar una coleccin y modificarla de tal forma que sus
elementos esten ordenados.
*/
void ordenar(Coleccion& valores);