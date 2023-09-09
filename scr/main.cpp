#include <cstdio>
#include <string>
#include <iostream>
#include <Humano.hpp>

int main(int argc, char const *argv[])
{
    std::cout << "Inicio Mensaje" << std::endl;
    Humano h1;
    Humano h2;

    // h1.caminar();
    // h2.caminar();

    std::cout << "int: " << sizeof(int) << std::endl;
    std::cout << "char: " << sizeof(char) << std::endl;
    std::cout << "bool: " << sizeof(bool) << std::endl;
    std::cout << "float: " << sizeof(float) << std::endl;
    std::cout << "double: " << sizeof(double) << std::endl;
    std::cout << "Humano: " << sizeof(Humano) << std::endl;

    std::cout << std::endl
              << std::endl;

    std::cout << "Direccion de memoria: " << sizeof(Humano) << std::endl;
    int a = 4;
    std::cout << "Tamaño: " << sizeof(a) << std::endl;
    std::cout << "Contenido: " << a << std::endl;
    std::cout << "Direccion: " << &a << std::endl;
    std::cout << "Fin Mensaje" << std::endl;

    void *puntero = malloc(32);
    free(puntero);

    // Memoria dinamica (C)
    std::cout << std::endl
              << std::endl;
    std::cout << "Memoria dinamica en C" << std::endl;
    Humano *humanoC = (Humano *)malloc(sizeof(Humano));
    humanoC->Init();
    humanoC->DecirNombre();
    humanoC->Dest();
    free(humanoC);

    // Memoria dinamica (C++)
    std::cout << std::endl
              << std::endl;
    std::cout << "Memoria dinamica en C++" << std::endl;
    Humano *humanoCPP = new Humano();
    humanoCPP->DecirNombre();
    delete(humanoCPP);
    return 0;
}
