#pragma once
#include <Dibujo.hpp>
#include <iostream>

class Escenario : public Dibujo
{
private:
    /* data */
public:
    Escenario() : Dibujo("Undertale")
    {
        this->x += 0;
        this->y += 0;
    }
    Escenario(int x, int y) : Dibujo(x, y, "Undertale")
    {
        this->x += 0;
        this->y += 0;
    }
    ~Escenario() {}
};