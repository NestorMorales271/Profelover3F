#include <cstdio>
#include <string>
#include <iostream>
#include <Humano.hpp>

int main(int argc, char const *argv[])
{
    std::cout << "Inicio Mensaje" << std::endl;
    Humano h1;
    Humano h2;

    h1.caminar();
    h2.caminar();

    std::cout << "Fin Mensaje" << std::endl;
    return 0;
}
