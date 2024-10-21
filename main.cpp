#include "classes.hpp"

void prueba(Animal& recipiente)
{
    recipiente.comunicarse();
}

int main()
{   Animal animal;
    Perro perro;
    Gato gato;

    prueba(animal);
    animal.comunicarse();
    std::cout << "\n";
    
    prueba(perro);
    perro.comunicarse();
    std::cout << "\n";

    prueba(gato);
    gato.comunicarse();
    std::cout << "\n";
    
    
    return 0;
}