module Ejemplos exposing(..)

type IntList = IntNil | IntCons Int IntList

type StrList = StrNil | StrCons String StrList

type Lista elemento = Nil | Cons elemento (Lista elemento)

type Talvez elemento = Algo elemento | Nada

lista3: Lista Int
lista3 = Cons 3 Nil

lista4 : Lista String
lista4 = Cons "hola" (Cons "adios" Nil)

get i elementos =
    case elementos of
    Cons elemento resto ->
        if i == 0
        then Algo elemento
        else get (i-1) resto
    Nil -> Nada

mBuscar : (elemento -> Bool) -> Lista elemento -> Talvez elemento
mBuscar f v = Nada

buscar : (elemento -> Bool) -> Lista elemento -> Int
buscar f elementos =
    case elementos of
    Nil -> -1
    Cons elemento resto ->
        if f elemento
        then 0
        else
            let resultado = buscar f resto
            in
                if resultado == -1 then -1 else resultado + 1

map : (elemento -> otroElemento) -> Lista elemento -> Lista otroElemento
map f elementos = map f elementos 

long lista =
    case lista of
    Nil -> 0
    Cons _ resto -> 1 + long resto

intLong : IntList -> Int
intLong lista =
    case lista of
    IntNil -> 0
    IntCons _ resto -> 1 + intLong resto

strLong: StrList -> Int
strLong lista =
    case lista of
    StrNil -> 0
    StrCons _ resto -> 1 + strLong resto      

lista1 = IntCons 4 (IntCons 2 IntNil)
lista2 = StrCons "hola" StrNil
