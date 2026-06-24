#include<iostream>
#include "rlutil.h"
#include "pantallaPrincipal.h"
#include "menu.h"


int main()
{
    srand(time(0));
    rlutil::setColor(15);
    mostrarPantallaPrincipal();
    ejecutarMenuPrincipal();
    return 0;
}