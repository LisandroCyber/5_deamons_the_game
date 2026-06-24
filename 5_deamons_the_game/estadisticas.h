#pragma once
#include <string>

void calcularEstadisticas(bool ganador, int& partidasTotales, int& partidasGanadas,
    int& partidasPerdidas, std::string nombreJugador, int tiradasTotales, int tiradasRestantes, int& recordInvocaciones, std::string& nombreJugadorRecord);
void mostrarEstadisticas(bool ganador, int partidasTotales, int partidasGanadas, int partidasPerdidas, int tiradasTotales, int tiradasRestantes, int& recordInvocaciones, std::string& nombreJugadorRecord);
