-- module Main exposing (miVariable, add7)
module Main exposing (..)

miVariable : String
miVariable = "hola"

miVariable2 = 0 * 100

-- add7 = (+) 7

add7 x = 7 + x

add a b c = a + b + c 

area base = base * base

resultado = area 9

range : number -> List number
range i = case i of
    0 -> [0]
    a -> a :: range (a-1)

esPar num = case num of
    0 -> True
    1 -> False
    otro -> not (esPar (otro - 1))
    -- otro -> esPar (otro - 2)

range2 i = if i == 0 then [] else i :: range(i-1)

iRange inicio fin =
    if inicio == fin
    then []
    else inicio :: iRange (inicio + 1) fin 

valores = iRange 4 8

count xs =
    case xs of
    [] -> 0
    b::bs -> 1 + count bs

item i xs =
    case (i, xs) of
    (0, b::bs) -> b
    (i, b::bs) -> item (i - 1) bs
    a -> if i == 0 then 4 else  4

existe x xs =
    case xs of
    [] -> False
    b::bs -> if b == x then True else existe x bs

sumatoria xs = 
    case xs of
    [] -> 0
    b::bs -> b + sumatoria bs

multiplicatoria xs =
    case xs of
    [] -> 1
    b::bs -> b * multiplicatoria bs

operar : (Int -> Int -> Int) -> Int -> List Int -> Int 
operar f inicial xs =
    case xs of
    [] -> inicial
    b::bs -> f b (operar f inicial bs)    