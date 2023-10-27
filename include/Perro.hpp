#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>
#include <iostream>

class Perro : public Dibujo, public Actualizable
{
private:
    /* data */
public:
    Perro() : Dibujo("Perro")
    {
        this->x += 0;
        this->y += 0;
    }
    Perro(int x, int y) : Dibujo(x, y, "Perro")
    {
    }
    void Actualizar()
    {
        this->x += 0;
        this->y += 0;
    }
    ~Perro() {}
};