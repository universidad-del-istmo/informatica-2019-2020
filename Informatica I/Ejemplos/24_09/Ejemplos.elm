module Ejemplos exposing(..)

type Expression =
    Valor Bool 
    | And Expression Expression
    | Or Expression Expression
    | Not Expression
    | Variable String
    | Let String Expression Expression

type Algebra s = Algebra (Bool -> s) (s -> s -> s) (s -> s -> s) (s -> s) (String -> s) (String -> s -> s -> s) 

printAlgebra =
    let
        iValor b = if b then "true" else "false"
        iAnd s1 s2 =  "(" ++ s1 ++ " & " ++ s2 ++ ")"
        iOr s1 s2 = "(" ++ s1 ++ " | " ++ s2 ++ ")"
        iNot s = "!" ++ s
        iVar x = x
        iLet x s1 s2 = "let" ++  "  " ++ x ++ "=" ++ s1 ++ "; in " ++ s2
    in
        Algebra iValor iAnd iOr iNot iVar iLet   

buscarVariable vars x =
    case vars of
    [] -> Variable x
    (var,e)::resto -> if var == x then e else buscarVariable resto x

evalAlg =
    let 
        iVal x = \_ -> Valor x
        iAnd fa fb = \vars -> And (fa vars) (fb vars)
        iOr fa fb = \vars -> Or (fa vars) (fb vars)
        iNot fe = \vars -> Not (fe vars)
        iVar var = \vars -> buscarVariable vars var
        iLet v fe1 fe2 = \vars -> fe2 ((v,fe1 vars)::vars)           
    in
        Algebra iVal iAnd iOr iNot iVar iLet
--iValor1 b = b
--iAnd1 ba bb = ba && bb
--iOr b1 b2 = b1 || b2 
--iNot b = not b
--algebra1 = Algebra  iValor1 iAnd1 iOr iNot

--iValor2 b = b
--iAnd2 ba bb = ba || bb
--algebra2 = Algebra  iValor2 iAnd2

evaluar (Algebra iValor iAnd iOr iNot iVar iLet) expr =
    let
        alg = Algebra iValor iAnd iOr iNot iVar iLet
    in    
        case expr of
        Valor b -> iValor b
        And b1 b2 -> iAnd (evaluar alg b1) (evaluar alg b2)
        Or b1 b2 -> iOr (evaluar alg b1) (evaluar alg b2)
        Not e -> iNot (evaluar alg e)
        Variable x -> iVar x
        Let x e1 e2 -> iLet x (evaluar alg e1) (evaluar alg e2)

true = Valor True
false = Valor False

expr1  = And true false
expr2 =  Let "x" (Not true) (And (Not (And (Variable "x") true)) (Variable "x"))
expr3 e = And e e
-- expr4 = Not (Or true expr2)

