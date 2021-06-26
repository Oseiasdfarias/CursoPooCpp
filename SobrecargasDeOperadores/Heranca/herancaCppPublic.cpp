#include <iostream>

// Classe Base | Mãe | Pai
class A
{
    // Métodos e atribultos Privados da classe A
    private:
        int privado;

    // Métodos e atribultos Protegidos da classe A
    protected:
        int protegido;

    // Métodos e atribultos públicos da classe A
    public:
        int publico;

        int get_privado()
        {
            return privado;
        }

        // Construtor da classe A
        A()
        {    
            privado = 23;
            protegido = 24;
            publico = 25;
        }
};

// Class Derivada | Filha de A
class B: public A
{
    public:
        int get_protegido()
        {
            return protegido;
        }
};

int main(int argc, char const *argv[])
{
    B obj;
    std::cout << obj.publico << "\n";
    std::cout << obj.get_protegido() << "\n";
    std::cout << obj.get_privado() << "\n";
    return 0;
}
