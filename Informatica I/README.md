# Informatica I

## Linux

Durante este curso, el profesor utilizara Manjaro (https://manjaro.org/download/kde/).
Como sistema de trabajo. Los programas que se utilizaran corren en cualquier plataforma (Windows/Mac OSX/Linux)
por lo cual no es necesario instalar Fedora. Sin embargo, si quiere poder replicar exactamente todo lo que
se hace durante la clase. Se utilizara un tiempo de laboratorio para mostrar como configurar Fedora con
todas las herramientas necesarias.

## Virtualbox (https://www.virtualbox.org)

Si desea utilizar Manjaro pero no modificar el sistema operativo que tiene instalado actualmente,
puede instalar Virtualbox par correr Manjaro dentor de su sistema actual.

## Latex

Latex es un lenguaje para crear articulos cientificos. Es el estandar univrsal en los campos de
la Matematica, Fisica y Computacion (Nadie relevante usa Word para crear publicaciones.) En este
curso, todo trabajo escrito se realizara mediante Latex. Para instalar:

Manjaro: Escribir en la terminal
        
        pacman -Sy texlive-core texlive-latexextra

Web: Utilizar Overleaf
* https://www.overleaf.com/

Windows/Mac OSX: Utilizar TexStudio
* https://www.texstudio.org/

## Elm

Elm es un lenguaje puramente funcional. Este lenguaje permite programar mediante abstracciones
matematicas y crear codigo con el cual se puede razonar inductivamente. Este lenguaje tambien
puede utilizare en la web.

Windows/Mac/Linux:

1. Instalar NodeJS (lts): https://nodejs.org/en/download/
    * Manjaro (En la terminal):
    
            pacman -Sy nodejs-lts-dubnium

2. Instalar Elm
    * Manjaro (En la terminal):
    
            sudo npm install -g elm

    * Windows/Mac:
        
            npm install -g elm

## Visual Studio Code

Visual Studio Code es un editor de codigo ligero que se puede extender mediante
diversas extensiones. Soporta varios lenguajes.

Windows/Mac:
    
1. Descargar de: https://code.visualstudio.com/

Manjaro:

1. Instalar "yay":
  
        pacman -Sy yay
  
2. Instalar Visual Studio Code:
  
        yay -Sy visual-studio-code-bin

## Git

Git es un programa utilizado por los desarrolladores para llevar control de
los cambios que se llevan a cambio en el codigo. Tambien facilita compartir
e integrar codigo cuando se trabaja en grupo.

Windows/Mac

1. Descargar de: https://git-scm.com/

Manjaro:

1. Instalar mediante "pacman"

        pacman -Sy git