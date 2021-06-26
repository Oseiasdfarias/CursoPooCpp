#include <iostream>

class A
{
    int x;
    public:
        int get_x();
        void set_x(int x);
};

int A::get_x()
{
    return this->x;
}

void A::set_x(int x)
{
    this->x = x;
}

int main(int argc, char const *argv[])
{
    A obj1, obj2;
    obj1.set_x(23);
    obj2.set_x(33);
    std::cout << "Valor de x do obj1 " << obj1.get_x() << "\n";
    std::cout << "Valor de x do obj1 " << obj2.get_x() << "\n";

    return 0;
}
