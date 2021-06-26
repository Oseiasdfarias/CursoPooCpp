#include <iostream>

class A
{
    public:
        int x, y;
        A() { x = 0, y = 0; }
        A(int x, int y) { this->x = x, this->y = y;}

        A operator - ()
        {
            return A(-x, -y);
        }
        A operator ++()
        {
            x++;
            y++;
            return *this;
        }
        A operator ++(int)
        {
            x++;
            y++;
            return *this;
        }
};

int main(int argc, char const *argv[])
{
    A a(1, 2), b(2, 3);
    //A c = -a;
    A d = ++a;
    A e = ++b;

    // std::cout << "\nobj (a) Negativo: a.x: " << a.x << "| a.y: " << a.y << "\n";
    // std::cout << "Copia do obj (a) Negativo: c.x: " << c.x << "| c.y: " << c.y << "\n\n";
    
    std::cout << "\na.x: " << a.x << "| a.y: " << a.y << "\n";
    std::cout << "d.x: " << d.x << "| d.y: " << d.y << "\n\n";
    
    std::cout << "\nb.x: " << b.x << "| b.y: " << b.y << "\n";
    std::cout << "e.x: " << e.x << "| e.y: " << e.y << "\n\n";

    return 0;
}
