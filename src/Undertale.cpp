#include <Humano.hpp>
#include <Perro.hpp>
#include <Ventana.hpp>
#include <Escenario.hpp>
#include <cstdio>
#include <string>
#include <iostream>
#include <list>
#include <curses.h>

using namespace std;

int main(int argc, char const *argv[])
{
    Ventana ventana;
    Humano *humano1 = new Humano(0, 0);
    Escenario *escena1 = new Escenario(70, 45);
    Perro *perro1 = new Perro(100, 50);

    list<Dibujo *> dibujos;
    dibujos.push_back(humano1);
    dibujos.push_back(escena1);
    // dibujos.push_back(humano2);

    list<Actualizable *> actualizables;
    actualizables.push_back(humano1);
    actualizables.push_back(escena1);
    // actualizables.push_back(humano2);

    while (true)
    {
        int key = getch();
        if (key == 'q' || key == 'Q')
        {
            break;
        }
        if (key == 'a')
        {
            humano1->DesplazarIzq();
        }
        if (key == 'd')
        {
            humano1->DesplazarDer();
        }
        if (key == 'w')
        {
            humano1->DesplazarArriba();
        }
        if (key == 's')
        {
            humano1->DesplazarAbajo();
        }
        if (key == 'p')
        {
            dibujos.push_back(perro1);
            actualizables.push_back(perro1);
        }
        ventana.Actualizar(actualizables);
        ventana.Dibujar(dibujos);
    }
    return 0;
}
