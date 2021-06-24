#include <iostream>

struct Pessoa
{
	char Nome[50];
	int Idade;

	void LerDados()
	{
		std::cout << "Digite o Nome da Pessoa: ";
		std::cin >> Nome;
		std::cout << "Digite a Idade da Pessoa: ";
		std::cin >> Idade;
		std::cout << "\n";
	}

	void EscreverDados(int Midade)
	{
		if (Idade == Midade)
		{
			std::cout << Nome << " tem " << Midade << " Anos e tem a maior Idade!" << "\n";
		}
	}
};

int main(int argc, char **argv)
{
	Pessoa a[3];	

	std::cout << "\n\n _______________ Dados das Pessoas ____________________\n\n";
	for (int i = 0; i < 3; i++)
	{
		a[i].LerDados();
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
		a[i].EscreverDados(maiorIdade);
	
	}
std::cout << "\n";
	return 0;
}
