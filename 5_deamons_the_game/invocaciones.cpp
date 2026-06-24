#include <iostream>
#include <string>
#include "jugar.h"
#include "sellados.h"
#include "rlutil.h"
#include "ataque_lazamanus.h"
#include "invocaciones.h"

bool procesarInvocacion(bool vecSellados[5], std::string vecDemonios[5], int dado1, int dado2)
{
    bool DemonioSellable[5] = { false, false, false, false, false };
    int sellables = 0;

    if (!vecSellados[0] && dado1 == dado2)
    {
        DemonioSellable[0] = true;
        sellables++;
    }
    if (!vecSellados[1] && dado1 + dado2 == 7)
    {
        DemonioSellable[1] = true;
        sellables++;
    }
    if (!vecSellados[2] && (dado2 - dado1 == 1))
    {
        DemonioSellable[2] = true;
        sellables++;
    }
    if (!vecSellados[3] && dado1 + dado2 >= 10)
    {
        DemonioSellable[3] = true;
        sellables++;
    }
    if (!vecSellados[4] && ((dado1 == 6 && dado2 == 6) || (dado1 == 5 && dado2 == 5)))
    {
        DemonioSellable[4] = true;
        sellables++;
    }

    rlutil::locate(41, 19); 
    std::cout << "============= DEMONIOS INVOCADOS =============" << std::endl;
    
    int y = 21;
    if (sellables >= 1)
    {
        for (int i = 0; i < 5; i++)
        {
            if (DemonioSellable[i])
            {
                rlutil::locate(49, y);
                std::cout << "Podes sellar a " << vecDemonios[i] << std::endl;
                y++;
            }
        }

        sellarDemonio(vecSellados, vecDemonios, DemonioSellable, sellables);
        return true;
    }
    else
    {
        rlutil::locate(49, 21);
        std::cout << "Ningun demonio invocado..." << std::endl;
        return false;
    }
}
