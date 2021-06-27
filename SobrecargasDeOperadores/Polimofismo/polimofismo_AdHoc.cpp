#include <iostream>

class A
{
    public:
        int soma(int a, int b)
        {
            return a + b;
        }
        
        int soma(int a, double b)
        {
            return a + b;
        }


        int soma(int a, int b, int c)
        {
            return a + b + c;
        }

};

int main(int argc, char const *argv[])
{
    A obj;
    std::cout << obj.soma(1, 1) << "\n";

    // cast (double)1 para transformar um int em um double
    std::cout << obj.soma(1, (double)12) << "\n";
    std::cout << obj.soma(1, 1, 1) << "\n";
    return 0;
}
