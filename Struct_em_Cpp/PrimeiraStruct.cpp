#include <iostream>

struct Pessoa
{
	char Nome[50];
	int Idade;
};

int main(int argc, char **argv)
{
	Pessoa a[3];	
	std::cout << "\n\n _______________ Dados das Pessoas ____________________\n\n";
	for (int i = 0; i < 3; i++)
	{
		std::cout << "Digite o Nome da Pessoa: ";
		std::cin >> a[i].Nome;
		std::cout << "Digite a Idade da Pessoa: ";
		std::cin >> a[i].Idade;
		std::cout << "\n";
	}	

	int maiorIdade = 0;
	for (int i = 0; i < 3; i++)
	{
		if (a[i].Idade > maiorIdade)
		{
			maiorIdade = a[i].Idade;
		}
	}

	std::cout << "\n\n _______________ Maior Idade ____________________\n\n";
	for (int i = 0; i < 3; i++)
	{
		if (a[i].Idade == maiorIdade)
		{
			std::cout << a[i].Nome << " tem " << maiorIdade << " e é a maior Idade!" << "\n";
		}
	}
std::cout << "\n";
	return 0;
}
