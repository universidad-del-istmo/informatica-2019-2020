module Ejemplos exposing(..)

map f xs =
    case xs of
    [] -> []
    b::bs -> f b :: map f bs

longitud xs =
    case xs of
    [] -> 0
    _::bs -> 1 + longitud bs

sumatoria xs =
    case xs of
    [] -> 0
    b::bs -> b + sumatoria bs

promedio xs = sumatoria xs / longitud xs

fold elemento vacio xs =
    case xs of
    [] -> vacio
    b::bs -> elemento b (fold elemento vacio bs)

elemento _ previo = 1 + previo

longitud2 xs = fold (\_ previo -> 1 + previo) 0 xs
sumatoria2 xs = fold (\valor previo -> valor + previo) 0 xs
map2 f xs = fold (\valor previo -> f valor :: previo) [] xs

filterElemento f valor resto = if f valor then valor :: resto else resto
filter f xs = fold (filterElemento f) [] xs


numeros n = if n > 1 then n :: numeros (n-1) else []

cons2 bs cs =
    case cs of
    [] -> bs
    d::ds -> d::cons2 bs ds 

cons bs cs = List.reverse(cons2 (List.reverse bs) (List.reverse cs))
    

