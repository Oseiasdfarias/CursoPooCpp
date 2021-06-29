#include <iostream>

template < typename x >
class Classe
{
    public:
        int y;
        x tipoGenerico;
        Classe() { tipoGenerico = 10; }
        Classe( x tipo, int y ) { tipoGenerico = tipo, this->y = y; }
};

int main(int argc, char const *argv[])
{
    Classe <int> ObjI;
    std::cout << "\nValor de tipoGenerico: " << ObjI.tipoGenerico << "\n";

    Classe <float> ObjD( 2.8383, 2 );
    std::cout << "Valor de tipoGenerico: " << ObjD.tipoGenerico << "\n";
    std::cout << "Valor de tipoGenerico: " << ObjD.y << "\n\n";

    return 0;
}
