#include <stdio.h>

typedef struct Aluno_
{
	char nome[50];
	int idade;
}Aluno;

void ResumoAluno(Aluno *alu);
void LerDadosAluno(Aluno *al);

int main()
{
struct Aluno_ aluno[3];

printf("\n\n_________ Informe os Dados dos Alunos(as) ____________\n");
for (int i = 0; i < 3; i++)
{
	LerDadosAluno(&aluno[i]);
}
printf("\n___________ Resuno dos Dados dos Alunos(as) ____________\n");

for (int i = 0; i < 3; i++)
{
	ResumoAluno(&aluno[i]);
}
printf("\n\n");

	return 0;
}

void LerDadosAluno(Aluno *al)
{
		printf("Digite o nome do aluno(a): ");
		scanf("%s", al->nome);

		printf("Digite a idade do aluno(a): ");
		scanf("%d", &al->idade);
		printf("\n");
}

void ResumoAluno(Aluno *alu)
{
		printf("\nO Aluno(a) %s tem %d Anos!", alu->nome, alu->idade);
}

