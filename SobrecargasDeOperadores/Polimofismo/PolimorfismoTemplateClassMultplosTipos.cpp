#include <iostream>

// Template de Class com vários Tipos
template < typename x, typename y >
class Par
{
    public:
        x tipoGenerico1;
        y tipoGenerico2;
        Par( x tipo1, y tipo2 )
        { tipoGenerico1 = tipo1, tipoGenerico2 = tipo2; }
};

// Template Método com vários Tipos
template <typename tipo1, typename tipo2>
void return1 (tipo1 x, tipo2 y)
{
    std::cout << "Valor 1\n";
}

int main(int argc, char const *argv[])
{
    Par <int, char> ObjI(2, 'A');
    std::cout << "Valor de tipoGenerico1: " << ObjI.tipoGenerico1 << "\n";
    std::cout << "Valor de tipoGenerico2: " << ObjI.tipoGenerico2 << "\n";

    Par <float, char> ObjD( 2.8383, 'a' );
    std::cout << "Valor de tipoGenerico1: " << ObjD.tipoGenerico1 << "\n";
    std::cout << "Valor de tipoGenerico2: " << ObjD.tipoGenerico2 << "\n";

    return1(1, 'a');
    return1(1, 2.33);

    return 0;
}
