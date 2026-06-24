#include <iostream>
#include "rlutil.h"
#include "creditos.h"

void mostrarCreditos()
{
	rlutil::saveDefaultColor();
	rlutil::setColor(12);
		bool salir = false;
		int opcionMenuDeJuego = 0;
	do 
	{
		rlutil::cls();
		rlutil::locate(34, 2);  
		std::cout << "####################################################";
		rlutil::locate(34, 3); 
		std::cout << "                 LOS CINCO DEMONIOS                 ";
		rlutil::locate(34, 4);
		std::cout << "####################################################";
		rlutil::locate(40, 6);
		std::cout << "El libro que jamas debio abrirse...";
		rlutil::locate(47, 7);
		std::cout << "Ha sido abierto...";
		rlutil::locate(42, 10);
		std::cout << "Programacion y desarrollo:";
		rlutil::locate(42, 11);
		std::cout << "Lisandro Romero";
		rlutil::locate(42, 12);
		std::cout << "Legajo ~ 26104";
		rlutil::locate(35, 14);
		std::cout << "UTN - Facultad Regional General Pacheco";
		rlutil::locate(39, 15); 
		std::cout << "Tecnico Universitario en Programacion";
		rlutil::locate(36, 16); 
		std::cout << "Programacion I - Trabajo Practico Integrador";
		rlutil::locate(53, 18); 
		std::cout << "Anio 2026";
		rlutil::locate(42, 20);
		std::cout << "(C) 2026 Lisandro Romero";
		rlutil::locate(40, 22);  
		std::cout << "Todos los derechos reservados.";
		rlutil::locate(47, 24); 
		std::cout << "Gracias por jugar.";
		rlutil::locate(34, 26); 
		std::cout << "####################################################";
		rlutil::locate(37, 28); 
		std::cout << "Presione Escape para volver al Menu Principal";

		opcionMenuDeJuego = rlutil::getkey();

		if (opcionMenuDeJuego == 0)
		{
			rlutil::cls();
			salir = true;
		}

	} while (salir == false);

	rlutil::resetColor();
}