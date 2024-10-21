#ifndef CLASSES_HPP //si no está definido CLASSES_HPP
#define CLASSES_HPP

#include <iostream>
#include <cstdlib>

class Animal
{
public:
        //constructores para inicializar de distintas maneras
        //Animal()=default; 
        
        //metodos 
        void virtual comunicarse(); //habilitamos este metodo para aplicar polimorfismo
        //getters
        std::string getNombre();
        int getEdad();

        //setters
        void setNombre(std::string nombre);
        void setEdad(int edad);

        // Destructor virtual
         //virtual ~Animal();
private:
    std::string nombre;
    int edad;
};


class Perro: public Animal
{
public:
    void comunicarse() override;
    bool getColmillos();
    void setColmillos(bool colmillosSanos);

private:
    bool tieneColmillosSanos;
};

class Gato: public Animal
{
public:
    void comunicarse() override;
    bool getGarras();
    void setGarras(bool garrasSanas);

private:
    bool tieneGarrasSanas;
};


#endif //CLASSES_HPP