#include <iostream>

struct A
{
    int x;
    A(){
        x = 10;
        std::cout << "Construiu um Obj\n";
    }

};

int main(int argc, char const *argv[])
{
    A Obj[2];
    std::cout << Obj[0].x << "\n";
    Obj[0].x = 2;
    std::cout << Obj[0].x << "\n";
    Obj[0] = A();
    std::cout << Obj[0].x << "\n";
    std::cout << Obj[1].x << "\n";
    return 0;
}
