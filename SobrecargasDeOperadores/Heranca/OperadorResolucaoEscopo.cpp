#include <iostream>

class A
{
    private:
        int privado;
    protected:
        int protegido;
        int get_privado_A()
        {
            return privado;
        }
    public:
        int publico;

        /* Construtor da classe A sem parâmetros e inicializando os 
        valores dos atribultos existente na classe */
        A()
        {
            publico = 20;
            protegido = 22;
            privado = 24;
        }
};

class B: protected A
{
    public:
        using A::protegido;
        int publico;

        int get_publico()
        {
            return A::publico;
        }

        int get_protegido()
        {
            return A::protegido;
        }

        int get_privado_B()
        {
            return get_privado_A();
        }

        B()
        {
            publico = 1;
        }
};

int main(int argc, char const *argv[])
{
    B Obj;
    std::cout << "\nValor público herdado da classe A: " << Obj.get_publico() << "\n";
    std::cout << "Valor público herdado da classe A: " << Obj.publico << "\n";
    std::cout << "Valor protegido herdado da classe A: " << Obj.get_protegido() << "\n";
    std::cout << "Valor protegido herdado da classe A: " << Obj.protegido << "\n";
    std::cout << "Valor privado herdado da classe A: " << Obj.get_privado_B() << "\n\n";
    return 0;
}
