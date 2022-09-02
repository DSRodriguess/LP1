#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Escreva um programa em C onde, se possa representar os nomes e as notas de alunos de um curso da
// universidade. O programa deverá imprimir os nomes dos cinco alunos que obtiverem as maiores notas
// acima da média da turma. Considerar que a turma tenha 50 alunos. Usar a estrutura multivalorada vista em
// sala de aula.


 struct informacoes_do_aluno {
    char nome[30];
    int matricula[20];
    float av1;
    float av2;
    float media;
    float nota_final;
    char resultado[30];
    int x;
};

int main (void){
    //aluno alunos[50];
    int j;
    int n=3;
    int maior_nota[2];
    int i;
    int escolha;
    struct informacoes_do_aluno aluno[50];
        for(i=0; i<n; i++){
        printf("Nome do aluno .....: ");
        scanf("%s", aluno[i].nome);
        printf("Matricula do aluno .....: ");
        scanf("%i", aluno[i].matricula);
        printf("Nota da AV1: ");
        scanf("%f", &aluno[i].av1);
        printf("Nota da AV2: ");
        scanf("%f", &aluno[i].av2);
        printf("A media do aluno eh = %f \n\n", aluno[i].media = (aluno[i].av1+aluno[i].av2)/2);

        printf("Situacao do aluno: ");
        if(aluno[i].media >= 7)
        {
            //aluno[i].resultado = "aprovado";
            strcpy(aluno[i].resultado,"Aprovado");
            printf("%s\n\n",aluno[i].resultado);
        }
        else if(aluno[i].media < 7 && aluno[i].media >= 4 )
        {
            printf("Prova final\n\n");
            {
                printf("Nota da prova final: " );
                scanf("%f", &aluno[i].nota_final);
                printf("Resultado final: ");
                if((aluno[i].nota_final+aluno[i].media)/2 >= 6)
                {
                    strcpy(aluno[i].resultado,"Aprovado");
                    printf("%s\n\n",aluno[i].resultado);
                }
                else
                {
                    strcpy(aluno[i].resultado,"Reprovado");
                    printf("%s\n\n",aluno[i].resultado);
                }
            }
        }
        else
        {
            strcpy(aluno[i].resultado,"Reprovado");
            printf("%s\n\n",aluno[i].resultado);
        }
    }
    while (escolha!=5)
{

printf("\n\n ----------------------- ");

printf("\n 1 - Exibir lista de alunos ");
printf("\n 2 - Exibir alunos aprovados ");
printf("\n 3 - Exibir alunos reprovados ");
printf("\n 4 - Exibir as 5 maiores notas ");
printf("\n 5 - Fechar Programa ");
printf("\n\n Escolha uma opcao: ");
scanf("%d",&escolha);


// estrutura switch
switch (escolha) {

case 1:
{

// a função clrscr(); é para limpar a tela
system("cls");
printf("\n\n Opcao escolhida: 1 ");
printf("\n Lista de alunos: \n");
for(i=0; i<n; i++){
    printf("%s\n", aluno[i].nome);
}

break;
}

case 2:
{
system("cls");
printf("\n\n Opcao escolhida: 2 ");
printf("\n\n Alunos aprovados: \n\n");
for(i=0; i<n; i++){
    if(strcmp(aluno[i].resultado, "Aprovado") == 0){
    //if(aluno[i].resultado == "Aprovado"){
        printf(" %s \n", aluno[i].nome);
    }
}
break;
}

case 3:
{
system("cls");
printf("\n\n Opcao escolhida: 3 ");
printf("\n\n Alunos reprovados: \n\n");
for(i=0; i<n; i++){
    if(strcmp(aluno[i].resultado, "Reprovado") == 0){
        printf(" %s \n", aluno[i].nome);
    }
}
break;
}

case 4:
{
system("cls");
printf("\n\n Opcao escolhida: 4 ");
printf("\n\n As 5 maiores notas foram: \n\n");
maior_nota[0]=0;
maior_nota[1]=0;

for(j=0; j<2; j++)
{
 for(i=0; i<n; i++){
  if(maior_nota[j] < aluno[i].media && maior_nota[0]  !=  maior_nota[1] )
  {
   maior_nota[j] = i;
  }
}
     printf("%s\n%f\n", aluno[maior_nota[j]].nome, aluno[maior_nota[j]].media);
}

break;
}

default:
{
system("cls");

if( escolha==5)
{
continue;
}
printf("\n\n Opcao invalida, digite um numero entre 1 e 5. ");
break;
}

}

}

if( escolha==5)
printf("\n\n O Programa foi fechado");

getch();

}
