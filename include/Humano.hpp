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
    ~Humano()
    {
        // std::cout << "El humano ha muerto!!" << std::endl;
    }
    void Init()
    {
        // std::cout << "Un humano ha caido!!" << std::endl;
        // this->nombre = "Frisk";
    }
    void Dest()
    {
        // std::cout << "El humano ha muerto!!" << std::endl;
    }

    void caminar()
    {
        // std::cout << "Estoy caminando." << std::endl;
    }

    void DecirNombre()
    {
        // std::cout << "Mi nombre es: " << this->nombre << std::endl;
    }
};