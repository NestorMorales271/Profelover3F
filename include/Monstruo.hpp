#include <iostream>
class Monstruo
{
private:
    std::string nombre;

public:
    Monstruo()
    {
        std::cout << "Un monstruo ha caido!!" << std::endl;
        this->nombre = "Flowey";
    }
    ~Monstruo()
    {
        std::cout << "El monstruo ha muerto!!" << std::endl;
    }
    void Init()
    {
        std::cout << "Un monstruo ha caido!!" << std::endl;
        this->nombre = "Flowey";
    }
    void Dest()
    {
        std::cout << "El monstruo ha muerto!!" << std::endl;
    }

    void caminar()
    {
        std::cout << "Estoy caminando." << std::endl;
    }

    void DecirNombre()
    {
        std::cout << "Mi nombre es: " << this->nombre << std::endl;
    }

    void Ataques()
    {
        std::cout << "Los monstruos poseen ataques" << std::endl;
    }
};