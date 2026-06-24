#include <iostream>
#include "rlutil.h"
#include "pantallaPrincipal.h"

void mostrarPantallaPrincipal()
{
	rlutil::saveDefaultColor();
	rlutil::setColor(8);
	rlutil::hidecursor();
	rlutil::msleep(1500);
	rlutil::locate(45, 10);
	std::cout << "Abriendo el Necronomicon..." << std::endl;
	rlutil::msleep(1000);
	rlutil::locate(45, 11);
	std::cout << "Invocando a las sombras..." << std::endl;
	rlutil::msleep(1000);
	rlutil::locate(45, 12);
	std::cout << "Preparando los sigilos..." << std::endl;
	rlutil::msleep(1000);
	rlutil::locate(45, 13);
	std::cout << "Ritual listo." << std::endl;
	rlutil::msleep(1200);
	rlutil::showcursor();
	rlutil::resetColor();
}