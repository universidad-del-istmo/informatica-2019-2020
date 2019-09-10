module Ejemplos exposing(..)

-- El constructor Cons acepta dos parametros
type Lista = Nil | Cons Int Lista 

listALista l =
    case l of
    [] -> Nil
    i::is -> Cons i (listALista is)

listaAList l =
    case l of
    Nil -> []
    Cons i is -> i :: listaAList is 

count l =
    case l of
    Nil -> 0
    Cons _ is -> 1 + count is 

add1 l =
    case l of
    Nil -> Nil
    Cons b bs -> Cons (b + 1) (add1 bs) 

map : (Int -> Int) -> Lista -> Lista
map f l =

fold : (Int -> Int -> Int) -> Int -> Lista -> Int
fold f inicial lista =

type Natural = Cero | Succ Natural 

uno = Succ Cero
dos = Succ uno
tres = Succ dos
cuatro = Succ tres
cinco = Succ cuatro

intANat : Int -> Natural
intANat i =
    case i of
    0 -> Cero
    o -> Succ (intANat (o-1))

natAInt : Natural -> Int
natAInt x =
    case x of
    Cero -> 0
    Succ y -> 1 + natAInt y    

suma nat1 nat2 = 
    case nat1 of
    Cero -> nat2
    Succ x -> Succ(suma x nat2)

resta nat1 nat2 =
    case (nat1, nat2) of
    (Cero, _) -> Cero
    (_, Cero) -> nat1
    (Succ i, Succ j) -> resta i j

igual : Natural -> Natural -> Bool
igual nat1 nat2 =
    case (nat1, nat2) of
    (Cero, Cero) -> True
    (Succ a, Succ b) -> igual a b
    _ -> False

mayorQue : Natural -> Natural -> Bool
mayorQue nat1 nat2 =
    if igual nat1 nat2
    then False
    else
        case (nat1, nat2) of
        (Succ a, Succ b) -> mayorQue a b
        (Succ a, Cero) -> True
        _ -> False       

mult nat1 nat2 =
    case (nat1, nat2) of
    (Cero, _) -> Cero
    (_, Cero) -> Cero
    (Succ Cero, x) -> x
    (Succ i, _) -> suma nat2 (mult i nat2)

type Booleano = NTrue | NFalse

bId : Booleano -> Booleano
bId x = x

not : Booleano -> Booleano
not x =
    case x of
    NTrue -> NFalse
    NFalse -> NTrue

bIf cond si no =
    case cond of
    NTrue -> si
    NFalse -> no

and b1 b2 =
    case (b1,b2) of
    (NTrue, NTrue) -> NTrue
    _ -> NFalse

or b1 b2 =
    case (b1,b2) of
    (NFalse, NFalse) -> NFalse
    _ -> NTrue         