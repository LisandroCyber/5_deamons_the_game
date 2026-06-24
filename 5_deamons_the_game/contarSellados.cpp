#include "contarSellados.h"
#include "invocaciones.h"
#include "jugar.h"

int contarSellados(bool vecSellados[5])
{
	int sellados = 0;

	for (int i = 0; i < 5; i++)
	{
			if (vecSellados[i]==true)
			{
				sellados++;
			}
	}
	return sellados;

}