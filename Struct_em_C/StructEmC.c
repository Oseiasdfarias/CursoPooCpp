#include <stdio.h>

struct Aluno
{
	char nome[50];
	int idade;
};

int main()
{

struct Aluno aluno[2];

for (int i = 1; i <= 2 ; i++)
{
		printf("Digite o nome do aluno: ");
		scanf("%s", aluno[i].nome);

		printf("Digite a idade do aluno: ");
		scanf("%d", &aluno[i].idade);
		printf("\n");
}

for (int i = 1; i <= 2 ; i++)
{
		printf("\nO Aluno %s tem %d Anos!", aluno[i].nome, aluno[i].idade);
}
	printf("\n\n");
	return 0;
}
