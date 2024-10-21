#include "classes.hpp"

void Animal::comunicarse()
{
    std::cout << "Ruido";
}
//getters, traen el dato cuando se llaman
std::string Animal::getNombre()
{
    return nombre;
}

int Animal::getEdad() 
{
    return edad;
}

bool Perro::getColmillos() //caracteristicas del hijo Perro
{
    return tieneColmillosSanos;
}

bool Gato::getGarras()
{
    return tieneGarrasSanas;
}


//setters, reciben el dato para almacenarlo. Siempre reciben por parametro el dato.
void Animal::setNombre(std::string nombre)
{
    Animal::nombre=nombre; //guardo en el miembro nombre, de Animal, la variable nombre (variable local)
}

void Animal::setEdad(int edad)
{
    Animal::edad=edad;
}

void Perro::setColmillos(bool tieneColmillosSanos)
{
    Perro::tieneColmillosSanos=tieneColmillosSanos;
}

void Gato::setGarras(bool garrasSanas)
{
    Gato::tieneGarrasSanas=garrasSanas;
}


//variantes de comunicarse (clase animal) para aplicar polimorfismo
void Gato::comunicarse() 
{
    std::cout << "Miau Miau Miau";
}



void Perro::comunicarse()
{
    std::cout << "Woof Woof";
}




