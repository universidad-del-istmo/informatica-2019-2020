module Ejemplos exposing(..)

type Expression =
    Valor Bool
    | And Expression Expression
    | Or Expression Expression
    | Not Expression

type Algebra = Algebra (Bool -> Bool) (Bool -> Bool -> Bool) 

iValor1 b = b
iAnd1 ba bb = ba && bb
algebra1 = Algebra  iValor1 iAnd1

iValor2 b = b
iAnd2 ba bb = ba || bb
algebra2 = Algebra  iValor2 iAnd2

evaluar (Algebra iValor iAnd) expr =
    let
        alg = Algebra iValor iAnd
    in    
        case expr of
        Valor b -> iValor b
        And b1 b2 -> iAnd (evaluar alg b1) (evaluar alg b2)

true = Valor True
false = Valor False

expr1  = And true false
expr2 =  And (And true true) false
expr3 e = And e e
-- expr4 = Not (Or true expr2)

