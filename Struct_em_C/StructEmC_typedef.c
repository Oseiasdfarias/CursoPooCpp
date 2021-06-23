#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Aluno
{
	char curso[50];
	char nome[50];
	int idade;
}Aluno;

struct Professor
{
	char nome[50];
	char formacao[50];
	int idade;
};

int main()
{

Aluno aluno[2];
struct Professor prof[2];

for (int i = 1; i <= 2 ; i++)
{
		printf("Digite o nome do Professor(a): ");
		fgets(prof[i].nome, sizeof(prof[i].nome), stdin);

		printf("Digite a formação do Professor(a): ");
		fgets(prof[i].formacao, sizeof(prof[i].formacao), stdin);

		printf("Digite a idade do Professor(a): ");
		scanf("%d", &prof[i].idade);
		getchar();
		printf("\n");
}
for (int i = 1; i <= 2 ; i++)
{
		printf("Digite o nome do aluno(a): ");
		fgets(aluno[i].nome, sizeof(aluno[i].nome), stdin);

		printf("Digite o curso(a) do aluno: ");
		fgets(aluno[i].curso, sizeof(aluno[i].curso), stdin);

		printf("Digite a idade do aluno(a): ");
		scanf("%d", &aluno[i].idade);
		getchar();
		printf("\n");
}

printf("\n_______________________ Dados Professores _________________________\n");
for (int i = 1; i <= 2 ; i++)
{
		prof[i].nome[strcspn(prof[i].nome, "\n")] = 0;
		prof[i].formacao[strcspn(prof[i].formacao, "\n")] = 0;
		printf("\nO(A) Professor(a) %s tem %d Anos e é formado(a) em %s!", prof[i].nome , prof[i].idade, prof[i].formacao);
		
}
printf("\n___________________________________________________________________\n");
printf("\n");

printf("\n_______________________ Dados Alunos(as) _________________________\n");
for (int i = 1; i <= 2 ; i++)
{
		aluno[i].nome[strcspn(aluno[i].nome, "\n")] = 0;
		aluno[i].curso[strcspn(aluno[i].curso, "\n")] = 0;
		printf("\nO(A) Aluno(a) %s tem %d Anos e Cursa %s!", aluno[i].nome, aluno[i].idade, aluno[i].curso);
}
printf("\n___________________________________________________________________\n");
printf("\n\n");
return 0;
}
