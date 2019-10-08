-- Scalable Vector Graphics (SVG) can be a nice way to draw things in 2D.
-- Here are some common SVG shapes.
--
-- Dependencies:
--   elm install elm/svg
--


import Html exposing (Html)
import Svg exposing (..)
import Svg.Attributes exposing (..)

import Debug

configuracion = [
    viewBox "0 0 400 400",
    width "400",
    height "400"
  ]
  
color r =
  "rgba("
  ++ (Debug.toString (30*(modBy 7 r)))
  ++ ",0,"
  ++ (Debug.toString (30*(modBy 7 r)))
  ++ ",0.25)"

crearCirculo radio = 
  circle
        [
          cx (Debug.toString ((radio*radio)*0.1 + radio)),
          cy (Debug.toString (radio*radio * 0.1)),
          r (Debug.toString radio),
          fill (color (round radio)),
          stroke "black",
          strokeWidth "1"
        ]
        [
        ]


objetos radios = 
  List.map crearCirculo radios

accumulador (x,y) s = Debug.toString x ++ "," ++ Debug.toString y ++ " " ++ s 

toPoints : List (Int, Int) -> String
toPoints valores = List.foldl accumulador "" valores

triangulo =
  polyline
    [
      --points "100,0 100,200 150,200 100,0",
      points (toPoints [(100,0), (100,200), (150,200), (100,0)]),
      fill "none",
      stroke "red",
      strokeWidth "4"
    ]
    []

isoceles b h = 

main : Html msg
main = svg configuracion (triangulo :: objetos [10,20,30,70, 22])
    

-- There are a lot of odd things about SVG, so always try to find examples
-- to help you understand the weird stuff. Like these:
--
--   https://www.w3schools.com/graphics/svg_examples.asp
--   https://developer.mozilla.org/en-US/docs/Web/SVG/Attribute/d
--
-- If you cannot find relevant examples, make an experiment. If you push
-- through the weirdness, you can do a lot with SVG.