#include <vector>

/*
Laboratorio #9
Informatica II
Fecha de entrega: 23 de Abril, 2020 @ 11:59pm
*/

class LinkedList {

    public:
    /*
    Problema #1 (20%): Definir el metodo push que agrega un elemento al final de la lista encadenada.
    */
    void push(int valor);

    /*
    Problema #2 (20%): Definir el metodo "toVector" el cual debe retornar un vector
    con los mismos elementos que esta lista encadenada.
    */
    std::vector<int> toVector();

    /*
    Problema #3 (20%): Definir el "operador []" para la lista encadenada. Este operador debe retornar
    una referencia al indice dado como parametro. Puede asumir que los indices siempre son
    validos.

    https://en.cppreference.com/w/cpp/language/operators#Array_subscript_operator
    */
    int& operator[](const int indice);

    /*
    Problema #4: Definir el destructor para esta lista encadenada. Asegurese que
    todos los valores de la lista sean correctamente eliminados siguiendo
    los punteros que sean necesarios.

    https://en.cppreference.com/w/cpp/language/destructor
    */
    ~LinkedList();

    /*
    Problema #5: Definir el "operador =" tal que copie todos los valores de la lista
    actual a la nueva lista. Asegurese que:
     * Se crea una nueva copia de cada uno de los elementos de la lista con este operador.
     * Se libera la memoria ocupada por los valores anteriores

    https://en.cppreference.com/w/cpp/language/copy_assignment
    */
    LinkedList& operator=(const LinkedList& otra);

    private:
    int value;

    /*
    Cuando la lista tiene mas valores, esto es un puntero a una instancia de LinkedList,
    de lo contrario, tiene el valor de "nullptr"
    */
    LinkedList* rest;
};
