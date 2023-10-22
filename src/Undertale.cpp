#include <Humano.hpp>
#include <Ventana.hpp>
#include <cstdio>
#include <string>
#include <iostream>
#include <list>
#include <curses.h>

using namespace std;

int main(int argc, char const *argv[])
{
    Ventana ventana;
    Humano* humano1 = new Humano(0, 0);
    // Humano *humano2 = new Humano(100, 0);
    // Humano *humano3 = new Humano(50, 50);

    list<Dibujo *> dibujos;
    dibujos.push_back(humano1);
    // dibujos.push_back(humano2);
    // dibujos.push_back(humano3);

    list<Actualizable *> actualizables;
    actualizables.push_back(humano1);
    // actualizables.push_back(humano2);
    // actualizables.push_back(humano3);

    while (true)
    {
        int key = getch();
        if (key == 'q' || key == 'Q')
        {
            break;
        }
        if (key == 'a' || key == KEY_LEFT)
        {
            humano1->DesplazarIzq();
        }
        if (key == 'd' || key == KEY_RIGHT)
        {
            humano1->DesplazarDer();
        }
        if (key == 'w' || key == 'w')
        {
            humano1->DesplazarArriba();
        }
        if (key == 's' || key == 's')
        {
            humano1->DesplazarAbajo();
        }
        ventana.Actualizar(actualizables);
        ventana.Dibujar(dibujos);
    }
    return 0;
}
