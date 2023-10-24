#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>
#include <iostream>
class Alma : public Dibujo, public Actualizable
{
private:
    int numeroDisparos;

public:
    Alma() : Dibujo("Alma")
    {
        this->numeroDisparos = 5;
    }
    Alma(int x, int y) : Dibujo(x,y,"Alma")
    {
        this->numeroDisparos = 5;
    }
    void DesplazarIzq()
    {
        this->x += -1;
    }
    void DesplazarDer()
    {
        this->x += 1;
    }
    void DesplazarAbajo()
    {
        this->y += 1;
    }
    void DesplazarArriba()
    {
        this->y += -1;
    }
    void Actualizar()
    {
    }
    void Recargar()
    {
        this->numeroDisparos = 5;
    }
    void Disparar()
    {
        if (this->numeroDisparos > 0)
        {
            this->numeroDisparos -= 1;
        }
    }
    ~Alma(){}
};