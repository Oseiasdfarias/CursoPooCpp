#include <iostream>

class A
{
    int x;
    public:
        int get_x();
        void set_x(int x);
        A() { x = 8; }
        A(int x) { this -> x = x; }
        ~A() { std::cout << "\nDESTRUTOR\n"; }
};

int A::get_x()
{
    return x;
}

void A::set_x(int x)
{
    this->x = x;
}

int main(int argc, char const *argv[])
{
    // Primeira forma de alocar dinamicamente objetos de classes
    A *p = new A;
    p->set_x(233);
    std::cout << "Alocação da primeira forma: new A\n valor de p->x "
    << p->get_x();

    // Segunda forma de alocar dinamicamente objetos de classes
    A *p1 = new A(2323);
    std::cout << "\n\nAlocação da Segunda forma: new A()\n valor de p1->x "
    << p1->get_x();

    // Terceira forma, alocando um array de objetos
    A *p2 = new A[2];
    p2[0].set_x(23);
    std::cout << "\n\nAlocação da Terceira forma: new A[]\n valor de p2[0].x "
    << p2[0].get_x() << "\n";

    delete p, p1, p2;
    return 0;
}
