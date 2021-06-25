#include <iostream>

class humano{
    int idade;

    public:
        // Construtor da classe
        humano(){
            idade = 1;
        }

        // Método getter do atribulto idade
        int get_idade()
        {
            return idade;
        }

        // Método setter do atribulto idade
        void set_idade(int id)
        {
            idade = id; 
        }

};

int main(int argc, char const *argv[])
{
    humano humano1;
    std::cout << "Idade do Humano1: " << humano1.get_idade() << "\n";
    humano1.set_idade(34);
    std::cout << "Idade do Humano1: " << humano1.get_idade() << "\n";
    return 0;
}
