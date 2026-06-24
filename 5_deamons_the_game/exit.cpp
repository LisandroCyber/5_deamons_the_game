#include <iostream>
#include "rlutil.h"
#include "exit.h"

bool salirDelJuego()
{
    rlutil::saveDefaultColor();
    rlutil::setColor(12);
    char opcion;
    bool salir = false;
    rlutil::hidecursor();
    rlutil::locate(42, 12);
    std::cout << "====================================";
    rlutil::locate(41, 13);
    std::cout << "Seguro queres salir del juego? (S/N)";
    rlutil::locate(42, 14);
    std::cout << "====================================";
    opcion = rlutil::getkey();
    rlutil::showcursor();
    rlutil::resetColor();

    if (opcion == 's' || opcion == 'S')
    {
        salir = true;
    }
    return salir;

}