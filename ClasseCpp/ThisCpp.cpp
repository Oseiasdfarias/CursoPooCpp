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
    A obj1;
    obj1.set_x(23);
    std::cout << "Valor de x do obj1 " << obj1.qual() << "\n";

    return 0;
}
