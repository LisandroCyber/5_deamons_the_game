#include <iostream>
#include "rlutil.h"
#include "exit.h"
#include "jugar.h"
#include "estadisticas.h"
#include "creditos.h"
#include "final_del_juego.h"
#include "comoJugar.h"
#include "menu.h"

void mostrarMenuPrincipal()
{
    rlutil::locate(42, 3); 
    std::cout << "====================================";
    rlutil::locate(44, 4); 
    std::cout << "====== LOS CINCO DEMONIOS ======";
    rlutil::locate(42, 5); 
    std::cout << "====================================";
    rlutil::locate(50, 6); 
    std::cout << "====================";
    rlutil::locate(53, 7); 
    std::cout << "MENU PRINCIPAL";
    rlutil::locate(50, 8); 
    std::cout << "====================";
    rlutil::locate(52, 10);
    std::cout << "[1] - Jugar";
    rlutil::locate(52, 11); 
    std::cout << "[2] - Estadisticas";
    rlutil::locate(52, 12); 
    std::cout << "[3] - Creditos";
    rlutil::locate(52, 13); 
    std::cout << "[4] - Historia";
    rlutil::locate(50, 15); 
    std::cout << "====================";
    rlutil::locate(54, 16); 
    std::cout << "[Esc] - Salir";
    rlutil::locate(50, 17); 
    std::cout << "====================";
    rlutil::locate(55, 18); 
    std::cout << "OPCION: ";
}

void ejecutarMenuPrincipal()
{
    const int TIRADAS_TOTALES = 15;
    int opcionMenuPrincipal;
    int partidasTotales = 0;
    int partidasGanadas = 0;
    int partidasPerdidas = 0;
    int tiradasRestantes = 15;
    
    int recordInvocacion = TIRADAS_TOTALES + 1;
    std::string nombreJugadorRecord;
    std::string nombreJugador;

    bool salir = false;
    bool victoria = false;

    do
    {
        rlutil::cls();
        mostrarMenuPrincipal();
        opcionMenuPrincipal = rlutil::getkey();

        switch (opcionMenuPrincipal)
        {
        case 49: 
            rlutil::cls();
            menuDeJuego(victoria, partidasTotales, partidasGanadas, partidasPerdidas, tiradasRestantes, TIRADAS_TOTALES, nombreJugador, nombreJugadorRecord, recordInvocacion);
            break;

        case 50: 
            rlutil::cls();
            mostrarEstadisticas(victoria, partidasTotales, partidasGanadas, partidasPerdidas, TIRADAS_TOTALES, tiradasRestantes, recordInvocacion, nombreJugadorRecord);
            break;

        case 51: 
            rlutil::cls();
            mostrarCreditos();
            break;
        
        case 52:
            rlutil::cls();
            mostrarHistoria();
            break;

        case 0: 
            rlutil::cls();
            salir = salirDelJuego();
            break;

        default: std::cout << std::endl << " Opcion incorrecta..." << std::endl;
        }

    } while (salir == false);
}


void mostrarMenuDeJuego()
{
    rlutil::locate(42, 3); 
    std::cout << "====================================";
    rlutil::locate(44, 4); 
    std::cout << "====== LOS CINCO DEMONIOS ======";
    rlutil::locate(42, 5); 
    std::cout << "====================================";
    rlutil::locate(51, 7 );
    std::cout << "==================";
    rlutil::locate(53, 8);
    std::cout << "MENU DE JUEGO";
    rlutil::locate(51, 9); 
    std::cout << "==================";
    rlutil::locate(51, 11);
    std::cout << "[1] - Nueva partida";
    rlutil::locate(51, 12);
    std::cout << "[2] - Tutorial";
    rlutil::locate(42, 14);
    std::cout << "====================================";
    rlutil::locate(44, 15);
    std::cout << "[Esc] - Volver al Menu Principal";
    rlutil::locate(42, 16);
    std::cout << "====================================";
    rlutil::locate(55, 18);
    std::cout << "OPCION: ";
}

void menuDeJuego(bool& ganador, int& partidasTotales, int& partidasGanadas, int& partidasPerdidas, int& tiradasRestantes, int TIRADAS_TOTALES, std::string& nombreJugador, std::string& nombreJugadorRecord, int& recordInvocacion)
{
    bool salir = false;
    int opcionMenuDeJuego = 0;

    do
    {
        mostrarMenuDeJuego();
        opcionMenuDeJuego = rlutil::getkey();

        switch (opcionMenuDeJuego)
        {
            case 49:
                rlutil::cls();
                ejecutarJuego(ganador, partidasTotales, partidasGanadas, partidasPerdidas, tiradasRestantes,
                    TIRADAS_TOTALES, nombreJugador, nombreJugadorRecord, recordInvocacion);
            break;

            case 50:
                rlutil::cls();
                mostrarInstrucciones();
            break;

            case 0: 
                rlutil::cls();
            salir = true;
        }

    } while (salir == false);
}