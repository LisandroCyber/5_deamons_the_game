#pragma once

void ejecutarMenuPrincipal();
void mostrarMenuPrincipal();
void mostrarMenuDeJuego();
void menuDeJuego(bool& ganador, int& partidasTotales, int& partidasGanadas, int& partidasPerdidas, int& tiradasRestantes,
	int TIRADAS_TOTALES, std::string& nombreJugador, std::string& nombreJugadorRecord, int& recordInvocaciones);