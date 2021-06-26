#include <iostream>

class A
{
    public:
    int x, y;
    A() {x = y = 0; }
    A(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    A operator + (A a)
    {
        return A(x + a.x, y + a.y);
    }
};


/* Utilizando função para somar dois Objetos */
A soma(A a, A b)
{
    return A(a.x + b.x, a.y + b.y);
}

int main(int argc, char const *argv[])
{
    A a(1, 2), b(1, 2);

    /* Utilizando função para somar dois Objetos */
    A c = soma(a, b);
    std::cout << "Valor de x: " << c.x << "\n" << "Valor de y: " << c.y << "\n\n";

    /* Sobrecarga do Operador + para obter a soma de dois objetos A */

    A d = a + b;
    std::cout << "Valor de x: " << d.x << "\n" << "Valor de y: " << d.y << "\n";

    return 0;
}
