#include <iostream>

class A
{
    int x;
    friend class B;
};

class B
{
    int x;
    public:
        int qual(A);
};

int B::qual(A obj)
{
    return obj.x;
}

int main(int argc, char const *argv[])
{
    A obA;
    B obB;
    std::cout << "Valor de x da classe A: " << obB.qual(obA) << "\n";

    return 0;
}
