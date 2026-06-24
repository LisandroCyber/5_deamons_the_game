#include <iostream>
#include "rlutil.h"
#include "ataque_lazamanus.h"


bool ataqueLazamanus()
{
    int dado1 = rand() % 6 + 1;
    int dado2 = rand() % 6 + 1;
    int dado3 = rand() % 6 + 1;

    rlutil::locate(49, 23);
    std::cout << "Lazamanus ataca..." << std::endl;
    rlutil::locate(49, 24);
    std::cout << "Los dados muestran: ";
    rlutil::saveDefaultColor();
    rlutil::setColor(12);
    std::cout << "[" << dado1 << "] , [" << dado2 << "] , [" << dado3 << "] " << std::endl;
    rlutil::resetColor();

    if (dado1 == 6 && dado2 == 6 && dado3 == 6)
    {
        return true;
    }
    else
    {
        rlutil::locate(49, 25);
        std::cout << "Te salvas... Por ahora..." << std::endl;
    }

    return false;
}
