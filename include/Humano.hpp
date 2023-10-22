#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>
// #include <iostream>

class Humano : public Dibujo, public Actualizable
{
private:
    // std::string nombre;
public:
    Humano() : Dibujo("Humano")
    {
        // std::cout << "Un humano ha caido!!" << std::endl;
        // this->nombre = "Frisk";
    }
    Humano(int x, int y) : Dibujo(x, y, "Humano")
    {
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
        this->x += 0;
        this->y += 0;
    }
    ~Humano()
    {
    }
};