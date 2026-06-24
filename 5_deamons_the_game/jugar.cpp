#include <iostream>
#include <string>
#include "rondas.h"
#include "ataque_lazamanus.h"
#include "contarSellados.h"
#include "final_del_juego.h"
#include "estadisticas.h"
#include "rlutil.h"
#include "menu.h"
#include "jugar.h"



void ejecutarJuego(bool& ganador, int& partidasTotales, int& partidasGanadas, int& partidasPerdidas, int& tiradasRestantes,
    int TIRADAS_TOTALES, std::string& nombreJugador, std::string& nombreJugadorRecord, int& recordInvocacion)
{
    int invocacionActual = 1;
    int cantDemoniosSellados = 0;
    bool muertePorLazamanus = false;
    

    tiradasRestantes = TIRADAS_TOTALES;
    ganador = false;
    nombreJugador = pedirNombreJugador();

    std::string demonios[5] = {
        "[1] Baramos   ",
        "[2] Dracolord ",
        "[3] Drack     ",
        "[4] WhiteKing ",
        "[5] Lazamanus "
    };

    std::string sombras[5] = {
        " Sombra del Fuego ",
        " Sombra del Agua  ",
        " Sombra del Aire  ",
        " Sombra de Tierra ",
        " Sombra Mayor     "
    };

    bool demoniosSellados[5] = {
        false,
        false,
        false,
        false,
        false,
    };

    do
    {
        rlutil::hidecursor();

        mostrarEstadoRonda(nombreJugador, sombras, demonios, demoniosSellados, invocacionActual, tiradasRestantes);
        resolverRonda(demonios, demoniosSellados, invocacionActual, tiradasRestantes, muertePorLazamanus);
        cantDemoniosSellados = contarSellados(demoniosSellados);

        rlutil::showcursor();

    } while (tiradasRestantes > 0 && cantDemoniosSellados < 5 && muertePorLazamanus == false);


    if (cantDemoniosSellados == 5)
    {
        ganador = true;
    }
    else
    {
        ganador = false;
    }

    calcularEstadisticas(ganador, partidasTotales, partidasGanadas, partidasPerdidas, nombreJugador,
        TIRADAS_TOTALES, tiradasRestantes, recordInvocacion, nombreJugadorRecord);

    if (muertePorLazamanus == true)
    {
        derrotaPorLazamanus();
        return;
    }

    if (ganador)
    {
        pantallaVictoria();
        return;

    }
    else
    {
        pantallaDerrota();
        return;

    }


}