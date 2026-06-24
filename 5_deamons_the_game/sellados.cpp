#include <iostream>
#include "invocaciones.h"
#include "rlutil.h"
#include "sellados.h"

void sellarDemonio(bool vecSellados[5], std::string vecDemonios[5], bool demonioSellable[5], int sellables)
{
    if (sellables == 0) {
        return;
    }

    int indice = 0;
    if (sellables == 1)
    {
        for (int i = 0; i < 5; i++)
        {
            if (demonioSellable[i])
            {
                indice = i;
                break;
            }
        }

        vecSellados[indice] = true;
        rlutil::locate(41, 23);
        rlutil::saveDefaultColor();
        rlutil::setBackgroundColor(10);
        rlutil::setColor(0);
        std::cout << "El sigilo de " << vecDemonios[indice] << " ha sido sellado." << std::endl;
        rlutil::resetColor();
    }
    else
    {
        int eleccion;
        bool valido = false;

        do
        {
            rlutil::locate(41, 24);
            std::cout << "Elegi el numero del demonio que queres sellar: ";
            
            std::cin >> eleccion;
            eleccion--;
           
            if (eleccion >= 0 && eleccion < 5 && demonioSellable[eleccion])
            {
                valido = true;
            }

        } while (!valido);

        indice = eleccion;

        vecSellados[indice] = true;
        rlutil::locate(41, 25);
        std::cout << "El sigilo de " << vecDemonios[indice] << " ha sido sellado." << std::endl;
    }
}
