#include <iostream>

// Classe Abstrata, não pode instanciar um objeto
class Animal
{
    public:
        // Método puramente virtual
        virtual void emitirSom() = 0;

        // Método parcialmente virtual
        virtual void correr()
        {
            std::cout << "Animal está correndo!\n";
        }
};

class Gato: public Animal
{
    public:
        void emitirSom()
        {
            std::cout << "O Gato está miando\n";
        }
        
        void correr()
        {
            std::cout << "O Gato está correndo!\n";
        }
};

class Cachorro: public Animal
{
    public:
        void emitirSom()
        {
            std::cout << "O Cachorro está latindo\n";
        }
};

void Som(Animal *obj)
{
    obj->emitirSom();
}

void Correr(Animal *objeto)
{
    objeto->correr();
}

int main(int argc, char const *argv[])
{
    Animal *animal;
    Gato cat;
    Cachorro dog;

    Som(&cat);
    Correr(&cat);
    Som(&dog);

    return 0;
}
