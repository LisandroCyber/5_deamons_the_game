#include <iostream>
#include <string>
#include "dados.h"
#include "invocaciones.h"
#include "ataque_lazamanus.h"
#include "rlutil.h"
#include "rondas.h"

std::string pedirNombreJugador()
{
    std::string nombreJugador;
    char confirmar;

    do
    {
        rlutil::cls();

        rlutil::locate(40, 8); 
        std::cout << "========================================";
        rlutil::locate(42, 9); 
        std::cout << "====== NOMBRE DEL DESCENDIENTE ======";
        rlutil::locate(40, 10);
        std::cout << "========================================";

        rlutil::locate(47, 13);
        std::cout << "Ingresa tu nombre: ";
        std::cin >> nombreJugador;

        rlutil::locate(47, 15);
        std::cout << "Confirmar nombre (S/N): ";
        std::cin >> confirmar;
        if (confirmar == 's')
        {
            confirmar = 'S';
        }
    } while (confirmar != 'S');

    rlutil::cls();
    rlutil::locate(44, 10); 
    std::cout << "======================================";
    rlutil::locate(54, 11);
    std::cout << "Bienvenido/a " << nombreJugador;
    rlutil::locate(44, 12);
    std::cout << "======================================";
    rlutil::locate(39, 15);
    std::cout << "Presione una tecla para iniciar la partida...";
    rlutil::anykey();

    return nombreJugador;
}

void mostrarEstadoRonda(std::string nombre, std::string vecSombras[5], std::string vecDemonios[5], bool vecSellados[5], int invocacion, int tiradas)
{
    rlutil::cls();
    rlutil::saveDefaultColor();
    rlutil::locate(41, 2); 
    std::cout << "==============================================";
    rlutil::locate(48, 3); 
    std::cout << "DESCENDIENTE: " << nombre;
    rlutil::locate(48, 5); 
    std::cout << "INVOCACIONES RESTANTES: " << (tiradas - 1);
    rlutil::locate(41, 6); 
    std::cout << "==============================================";

    int y = 7;
    for (int i = 0; i < 5; i++)
    {
        rlutil::locate(40, y);

        if (vecSellados[i])
        {
            std::cout << vecSombras[i] << " - " << vecDemonios[i];
            rlutil::setColor(10);
            std::cout << " - [SELLADO]";
        }
        else
        {
            std::cout << vecSombras[i] << " - " << vecDemonios[i];
            rlutil::setColor(4);
            std::cout << " - [ LIBRE ]";
        }
        y++;
        rlutil::resetColor();
    }

}

void resolverRonda(std::string vecDemonios[5], bool vecSellados[5], int& invocacion, int& tiradas, bool& muertePorLazamanus)
{
    int dado1 = tirarDado();
    int dado2 = tirarDado();

    rlutil::locate(41, 12);
    std::cout << "==============================================" << std::endl;
    rlutil::locate(41, 13);
    std::cout << "================ INVOCACION " << invocacion << " ================" << std::endl;
    rlutil::locate(41, 15);
    std::cout << "Pulsa una tecla para tirar los dados..." << std::endl;
    rlutil::anykey();
    rlutil::locate(41, 16);
    std::cout << "==============================================" << std::endl;
    rlutil::locate(43, 17);
    std::cout << "Los dados muestran: [" << dado1 << "] y [" << dado2 << "]" << std::endl;
    rlutil::locate(41, 18);
    std::cout << "==============================================" << std::endl;

    invocacion++;
    tiradas--;

   bool invocacionExitosa = procesarInvocacion(vecSellados, vecDemonios, dado1, dado2);
   if (invocacionExitosa == false && vecSellados[4] == false)
   {
       muertePorLazamanus = ataqueLazamanus();
   }

   if (tiradas == 0)
   {
        rlutil::locate(41,27);
        std::cout << "Te quedaste sin invocaciones..." << std::endl;
        rlutil::locate(41, 28);
        std::cout << "Presiona cualquier tecla para terminar la partida." << std::endl;

   }
   else
   {
       rlutil::locate(41, 27);
       std::cout << "Presiona cualquier tecla para avanzar de ronda..." << std::endl;
   }

   rlutil::anykey();
}