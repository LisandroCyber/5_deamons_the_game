#include <iostream>
#include <string>
#include "rondas.h"
#include "rlutil.h"
#include "menu.h"
#include "estadisticas.h"

void calcularEstadisticas(bool ganador, int& partidasTotales, int& partidasGanadas,
    int& partidasPerdidas, std::string nombreJugador, int tiradasTotales, int tiradasRestantes, int& recordInvocaciones, std::string& nombreJugadorRecord)

{
    int invocacionesUsadas = tiradasTotales - tiradasRestantes;
    
    partidasTotales++;

    if (ganador == true)
    {
        partidasGanadas++;

        if (invocacionesUsadas < recordInvocaciones)
        {
            recordInvocaciones = invocacionesUsadas;
            nombreJugadorRecord = nombreJugador;
        }
    }
    else
    {
        partidasPerdidas++;
    }
}

void mostrarEstadisticas(bool ganador, int partidasTotales, int partidasGanadas, int partidasPerdidas, 
    int tiradasTotales, int tiradasRestantes, int& recordInvocaciones, std::string& nombreJugadorRecord)
{
    bool salir = false;
    int opcionMenuDeJuego = 0;
    
    do
    {
        rlutil::cls();
        rlutil::hidecursor();

        if (partidasTotales > 0)
        { 
            rlutil::locate(43, 2);
            std::cout << "====================================";
            rlutil::locate(45, 3);
            std::cout << "====== LOS CINCO DEMONIOS ======";
            rlutil::locate(43, 4);
            std::cout << "====================================";
            if (recordInvocaciones <= tiradasTotales && nombreJugadorRecord != "")
            {

                rlutil::locate(50, 6);
                std::cout << "El mejor jugador fue: ";
                rlutil::saveDefaultColor();
                rlutil::setColor(9);
                rlutil::locate(73, 6);
                std::cout << nombreJugadorRecord;
                rlutil::resetColor();
                rlutil::locate(50, 7);
                std::cout << "ganando en ";
                rlutil::saveDefaultColor();
                rlutil::setColor(9);
                rlutil::locate(61, 7);
                std::cout << recordInvocaciones;
                rlutil::resetColor();
                rlutil::locate(64, 7);
                std::cout << "invocaciones.";
            }
            rlutil::locate(51, 9);
            std::cout << "==================";
            rlutil::locate(54, 10);
            std::cout << "ESTADISTICAS";
            rlutil::locate(51, 11);
            std::cout << "==================";
            rlutil::locate(51, 13);
            std::cout << "Partidas Jugadas: " << partidasTotales;
            rlutil::locate(51, 14);
            std::cout << "Partidas Ganadas: " << partidasGanadas;
            rlutil::locate(51, 15);
            std::cout << "Partidas Perdidas: " << partidasPerdidas;
            rlutil::locate(43, 17);
            std::cout << "====================================";
            rlutil::locate(44, 18);
            std::cout << "[Esc] - Volver al Menu Principal";
            rlutil::locate(43, 19);
            std::cout << "====================================";
        }
        else
        {
            rlutil::locate(42, 2);  
            std::cout << "====================================";
            rlutil::locate(44, 3); 
            std::cout << "====== LOS CINCO DEMONIOS ======";
            rlutil::locate(42, 4); 
            std::cout << "====================================";
            rlutil::locate(51, 12); 
            std::cout << "==================";
            rlutil::locate(54, 13); 
            std::cout << "ESTADISTICAS";
            rlutil::locate(51, 14);
            std::cout << "==================";
            rlutil::locate(46, 17); 
            std::cout << "No hay partidas jugadas.";
            rlutil::locate(42, 20); 
            std::cout << "====================================";
            rlutil::locate(44, 21);
            std::cout << "[Esc] - Volver al Menu Principal";
            rlutil::locate(42, 22);
            std::cout << "====================================";
        }
        opcionMenuDeJuego = rlutil::getkey();

        if (opcionMenuDeJuego == 0)
        {
            rlutil::cls();
            salir = true;
        }

    } while (salir == false);
            rlutil::showcursor();
}



