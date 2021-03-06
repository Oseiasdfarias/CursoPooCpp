#include <iostream>

class Animal
{
    public:
        virtual void emitirSom()
        {
            std::cout << "Som do Animal\n";
        }
};

class Gato: public Animal
{
    public:
        void emitirSom()
        {
            std::cout << "O Gato está miando\n";
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

int main(int argc, char const *argv[])
{
    Animal animal;
    Gato cat;
    Cachorro dog;

    Som(&animal);
    Som(&cat);
    Som(&dog);

    return 0;
}
