#include <iostream>

struct ClasseA
{
    int x;
    ClasseA()
    {
        x = 0;
    }
    ClasseA(int valor)
    {
        x = valor;
    }
    
};


int main(int argc, char const *argv[])
{
    ClasseA obj, obj1(23);
    obj = ClasseA(22);
    std::cout << obj.x << "\n";
    std::cout << obj1.x << "\n";

    return 0;
}
