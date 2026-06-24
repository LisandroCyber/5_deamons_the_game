#pragma once
#include <string>

void mostrarEstadoRonda(std::string nombre, std::string vecSombras[5], std::string vecDemonios[5], bool vecSellados[5], int invocacion, int tiradas);
void resolverRonda(std::string vecDemonios[5], bool vecSellados[5], int& invocacion, int& tiradas, bool& muertePorLazamanus);
std::string pedirNombreJugador();