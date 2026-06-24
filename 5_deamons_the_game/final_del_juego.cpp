#include <iostream>
#include "rlutil.h"
#include "final_del_juego.h"


void pantallaVictoria()
{
	bool salir = false;
	int opcionMenuDeJuego = 0;

	do
	{
		rlutil::cls();

		rlutil::locate(42, 6); 
		std::cout << "====================================";
		rlutil::locate(55, 7); 
		std::cout << "!VICTORIA!";
		rlutil::locate(42, 8); 
		std::cout << "====================================";
		rlutil::locate(46, 11); 
		std::cout << "Sellaste a los 5 demonios.";
		rlutil::locate(45, 13); 
		std::cout << "El libro ha sido cerrado...";
		rlutil::locate(41, 14); 
		std::cout << "y la oscuridad abandona el reino...";
		rlutil::locate(40, 16);
		std::cout << "Los pueblos celebran tu valentia y tu";
		rlutil::locate(41, 17);
		std::cout << "nombre sera recordado por generaciones.";
		rlutil::locate(49, 20);
		std::cout << "EL MUNDO ESTA A SALVO";
		rlutil::locate(42, 22);
		std::cout << "Presione Escape para volver al Menu de Juego";

		opcionMenuDeJuego = rlutil::getkey();

		if (opcionMenuDeJuego == 0)
		{
			rlutil::cls();
			salir = true;
		}

	} while (salir == false);
}


void derrotaPorLazamanus()
{
	bool salir = false;
	int opcionMenuDeJuego = 0;

	do
	{
		rlutil::cls();
		rlutil::locate(42, 6);  
		std::cout << "====================================";
		rlutil::locate(56, 7);  
		std::cout << "DERROTA";
		rlutil::locate(42, 8);  
		std::cout << "====================================";
		rlutil::locate(42, 11);  
		std::cout << "Sufriste el feroz ataque de Lazamanus.";
		rlutil::locate(45, 14);  
		std::cout << "El libro te absorbio el alma...";
		rlutil::locate(47, 15);  
		std::cout << "para no liberarla nunca...";
		rlutil::locate(54, 16);  
		std::cout << "NUNCA mas.";
		rlutil::locate(44, 19);  
		std::cout << "Los demonios han sido liberados.";
		rlutil::locate(52, 22);  
		std::cout << "FIN DEL JUEGO";
		rlutil::locate(42, 24);  
		std::cout << "====================================";
		rlutil::locate(37, 27);  
		std::cout << "Presione Escape para volver al Menu de Juego";

		opcionMenuDeJuego = rlutil::getkey();
		std::cout << opcionMenuDeJuego;

		if (opcionMenuDeJuego == 0)
		{
			rlutil::cls();
			salir = true;
		}

	} while (salir == false);
}

void pantallaDerrota()
{
	bool salir = false;
	int opcionMenuDeJuego = 0;

	do
	{
		rlutil::cls();

		rlutil::locate(42, 6);  
		std::cout << "====================================";
		rlutil::locate(56, 7);  
		std::cout << "DERROTA";
		rlutil::locate(42, 8);  
		std::cout << "====================================";
		rlutil::locate(42, 11);  
		std::cout << "No lograste sellar a los 5 demonios.";
		rlutil::locate(46, 13);  
		std::cout << "El libro quedara abierto...";
		rlutil::locate(50, 14); 
		std::cout << "para no cerrarse...";
		rlutil::locate(54, 15);  
		std::cout << "NUNCA mas.";
		rlutil::locate(44, 18); 
		std::cout << "Los demonios han sido liberados.";
		rlutil::locate(49, 21);
		std::cout << "EL MUNDO HA SUCUMBIDO";
		rlutil::locate(42, 23);
		std::cout << "====================================";
		rlutil::locate(37, 26); 
		std::cout << "Presione Escape para volver al Menu de Juego";

		opcionMenuDeJuego = rlutil::getkey();
		std::cout << opcionMenuDeJuego;

		if (opcionMenuDeJuego == 0)
		{
			rlutil::cls();
			salir = true;
		}

	} while (salir == false);
}