#include <iostream>

template < typename X >
X soma( X a, X b)
{
    return a + b;
}

int main(int argc, char const *argv[])
{
    int i1 = 12, i2 = 20;
    std::cout << "\nSoma de " << i1 << " + " << i2 << " = " << soma(i1, i2) << "\n";

    double d1 = 12.23, d2 = 12.77;
    std::cout << "Soma de " << d1 << " + " << d2 << " = " << soma(d1, d2) << "\n\n";
    return 0;
}
