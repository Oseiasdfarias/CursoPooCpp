#include <iostream>

class A
{
    int x;
    public:
        int qual()
        {
            return this->x;
        }

        void set_x(int x)
        {
            this->x = x;
        }
};

int main(int argc, char const *argv[])
{
    A obj1, obj2;
    obj1.set_x(23);
    obj2.set_x(33);
    std::cout << "Valor de x do obj1 " << obj1.qual() << "\n";
    std::cout << "Valor de x do obj1 " << obj2.qual() << "\n";

    return 0;
}
