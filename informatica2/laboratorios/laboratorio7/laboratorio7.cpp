struct mapa {
    bool** posiciones;
    int ancho;
    int largo;
};

struct vector {
    int x;
    int y;
};

/*
Problema 1 (25%): Defina una clase llamada vehiculo. Esta clase debe tener
un constructor que acepta un mapa (el struct de arriba) y un vector
que representa la posicion inicial del vehiculo
como parametro en su constructor. Estos deben ser guardados como
variables internas de la case. Adicionalmente, debe haber una variable
llamada velocidad de tipo "vector" iniciada en <0,0> que representa
la velocidad actual del vehiculo.
*/

/*
Problema 2 (10%): Defina un metodo o funcion miembro de vehiculo que
imprima el estado actual del vehiculo. Esto seria la posicion y velocidad
actual del vehiculo.
*/

/*
Probelma 3 (10%): Defina la funcion miembro o metodo "acelerar". Esta funcion
acepta un vector y le suma dicho vector a la velocidad actual del vehiculo.
*/

/*
Problema 4 (30%): Defina la funcion "validarAvance". Esta funcion debe calcular la suma
de la posicion y la velocidad del vehiculo. Esta seria la posicion
nueva del vehiculo. Luego debe validar que siguiendo una linea recta
entre la posicion actual y la posicion nueva, todos los espacios recorridos
son validos segun el mapa. En otras palabras, buscando los indices
<x,y> de la posicion del vehiculo en el arreglo de posiciones retorna true.
*/

/*
Problema 5 (25%): Defina un metodo o funcion miembro llamado "avanzar".
Esta funcion acepta como parametro un numero que indica el tiempo que
este vehiculo estara avanzando (en segundos). Por cada segundo que avance
el vehiculo, la posicion interna del vehiculo debe sumarsele la velocidad.
Antes de cada incremento, el vehiculo debe revisar si la nueva posicion
esta dentro de mapa del vehiculo buscando si los indices <x,y> de su pocicion
en el arreglo de posiciones tienen como valor true. Adicionalmente, si el
vehiculo llega al borde del mapa (su poscicion excede el ancho o largo), el
vehiculo debe "teletransportarse" al primer espacio valido del lado opuesto
del mapa.
*/