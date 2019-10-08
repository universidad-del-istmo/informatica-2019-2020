-- import Browser
-- import Html.App as App
import Html exposing (Html, button, div, text)
import Html.Events exposing (onClick)

import Debug

main =
  Html.program { init = 0, update = update, view = view, subscriptions = \_ -> Sub.none }

type Msg = Increment | Decrement

update msg model =
  case msg of
    Increment ->
      model + 1

    Decrement ->
      model - 1

view model =
  div []
    [ button [ onClick Decrement ] [ text "-" ]
    , div [] [ text (toString model) ]
    , button [ onClick Increment ] [ text "+" ]
    ]