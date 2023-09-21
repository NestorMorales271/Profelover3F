#include <iostream>
class Humano
{
private:
    std::string nombre;

public:
    Humano()
    {
        std::cout << "Un humano ha caido!!" << std::endl;
        this->nombre = "Frisk";
    }
    ~Humano()
    {
        std::cout << "El humano ha muerto!!" << std::endl;
    }
    void Init()
    {
        std::cout << "Un humano ha caido!!" << std::endl;
        this->nombre = "Frisk";
    }
    void Dest()
    {
        std::cout << "El humano ha muerto!!" << std::endl;
    }

    void caminar()
    {
        std::cout << "Estoy caminando." << std::endl;
    }

    void DecirNombre()
    {
        std::cout << "Mi nombre es: " << this->nombre << std::endl;
    }

    void Frisk()
    {
        std::cout << "Mi nombre es Frisk " << std::endl;
    }

    void Chara()
    {
        std::cout << "Mi nombre es Chara :) " << std::endl;
    }
};