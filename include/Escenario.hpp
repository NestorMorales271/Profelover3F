#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>
#include <iostream>

class Escenario : public Dibujo, public Actualizable
{
private:
    /* data */
public:
    Escenario() : Dibujo("Undertale")
    {
    }
    Escenario(int x, int y) : Dibujo(x, y, "Undertale")
    {
    }
    void Actualizar()
    {
        this->x += 0;
        this->y += 0;
    }
    ~Escenario() {}
};