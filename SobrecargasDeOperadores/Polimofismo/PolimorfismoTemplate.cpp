#include <iostream>

template < typename X >
X soma( X a, X b)
{
    return a + b;
}

template < typename D >
void maior(D a, D b)
{
    if (a > b)
    { std::cout << a << " > " << b << "\n"; }

    else if (a == b)
    { std::cout << a << " = " << b << "\n"; }

    else
    { std::cout << b << " > " << a << "\n"; }
}

int main(int argc, char const *argv[])
{
    int i1 = 12, i2 = 20;
    std::cout << "\nSoma de " << i1 << " + " << i2 << " = " << soma(i1, i2) << "\n";

    double d1 = 12.23, d2 = 12.77;
    std::cout << "Soma de " << d1 << " + " << d2 << " = " << soma(d1, d2) << "\n\n";

    maior(i1, i2);
    maior(i1, i1);
    maior(d1, d2);
    maior(d1, d1);
    
    return 0;
}
