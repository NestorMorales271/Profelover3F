#include <Humano.hpp>
#include <Perro.hpp>
#include <Ventana.hpp>
#include <Escenario.hpp>
#include <Alma.hpp>
#include <Bala.hpp>
#include <cstdio>
#include <string>
#include <iostream>
#include <list>
#include <curses.h>

using namespace std;

int main(int argc, char const *argv[])
{
    Ventana ventana;
    Humano *humano1 = new Humano(4, 4);
    Escenario *escena1 = new Escenario(10, 45);
    Perro *perro1 = new Perro(100, 50);
    Alma *alma = new Alma(10, 6);
    Bala *bala = new Bala(12, 6);

    humano1->RecogerAlma(alma);

    list<Dibujo *> dibujos;
    dibujos.push_back(humano1);
    dibujos.push_back(escena1);
    dibujos.push_back(alma);
    

    list<Actualizable *> actualizables;
    actualizables.push_back(humano1);
    actualizables.push_back(alma);
    

    while (true)
    {
        int key = getch();
        if (key == 'q' || key == 'Q')
        {
            break;
        }
        if(key==' '){
            alma->Actualizar();
            dibujos.push_back(bala);
            alma->Disparar();
            actualizables.push_back(bala);
        }
        if(key=='r'){
            alma->Recargar();
        }
        if(key=='n'){
            bala->CambiarDireccion();
        }
        if (key == 'a')
        {
            humano1->DesplazarIzq();
            alma->DesplazarIzq();
            bala->DesplazarIzq();
        }
        if (key == 'd')
        {
            humano1->DesplazarDer();
            alma->DesplazarDer();
            bala->DesplazarDer();
        }
        if (key == 'w')
        {
            humano1->DesplazarArriba();
            alma->DesplazarArriba();
            bala->DesplazarArriba();
        }
        if (key == 's')
        {
            humano1->DesplazarAbajo();
            alma->DesplazarAbajo();
            bala->DesplazarAbajo();
        }
        if (key == 'p')
        {
            clear();
            dibujos.push_back(perro1);
            actualizables.push_back(perro1);
        }
        ventana.Actualizar(actualizables);
        ventana.Dibujar(dibujos);
    }
    return 0;
}
