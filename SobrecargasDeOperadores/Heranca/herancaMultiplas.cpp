#include <iostream>

class Base1
{
    public:
        int x;
        Base1() { x = 1; }
};
class Base2
{
    public:
        int x;
        Base2() { x = 2; }
};
class Derivada: public Base1, public Base2
{
    public:
        int x;
        Derivada() { x = 3; }
};

int main(int argc, char const *argv[])
{
    Derivada D;
    std::cout << "\nHerança Base1 X: " << D.Base1::x << "\n";
    std::cout << "Herança Base2 X: " << D.Base2::x << "\n";
    std::cout << "Variável X da Class: " << D.x << "\n\n";

    return 0;
}
