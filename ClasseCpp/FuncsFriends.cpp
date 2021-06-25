#include <iostream>
#include <time.h>
class A
{
    int x;
    friend int qual(A);
    friend void coloca(A*, int);
};
int qual(A obj){ return obj.x;}
void coloca(A *obj, int valor){ obj->x = valor; }

int main(int argc, char const *argv[])
{
    A objeto;
    coloca(&objeto, 19);
    std::cout << qual(objeto) << "\n";

    return 0;
}
