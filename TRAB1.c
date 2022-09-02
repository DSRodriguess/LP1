#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char regiao[80];
	char nome[80];
	char local[80];
	char tipo[80];
	char qualidade[80];
	char resumo[80];
}descricao;

typedef struct{
	char regiao[80];
	char nome[80];
	char local[80];
	char tipo[80];
	char qualidade[80];
	char resumo[80];
}recebe;

void excluir(char reg[80],descricao d[100],char nome[80]){
	int i = 0;
	while(i < 100){
		if(strcmp(d[i].regiao,reg) == 0 && strcmp(d[i].nome,nome) == 0){
			strcpy(d[i].regiao,"");
			strcpy(d[i].nome,"");
			strcpy(d[i].local,"");
			strcpy(d[i].tipo,"");
			strcpy(d[i].qualidade,"");
			strcpy(d[i].resumo,"");
			break;
		}
	}	
}

void alterar(char reg[80],descricao d[100],char nome[80]){
	int i = 0;
	while(i < 100){
		if(strcmp(d[i].regiao,reg) == 0 && strcmp(d[i].nome,nome) == 0){
			printf("Novo nome: ");
			scanf("%s",d[i].nome);

			printf("Novo local: ");
			scanf("%s",d[i].local);

			printf("Novo tipo: ");
			scanf("%s",d[i].tipo);

			printf("Nova qualidade: ");
			scanf("%s",d[i].qualidade);

			printf("Novo resumo: ");
			scanf("%s",d[i].resumo);
			break;
		}
		i++;
	}
}


void incluir(char reg[80],descricao d[100],int num){
	strcpy(d[num].regiao,reg);

	printf("Digite o nome da atracao: ");
	scanf("%s",d[num].nome);

	printf("Digite o local da atracao: ");
	scanf("%s",d[num].local);

	printf("Digite o tipo da atracao: ");
	scanf("%s",d[num].tipo);

	printf("Digite a qualidade da atracao: ");
	scanf("%s",d[num].qualidade);

	printf("Digite o resumo da atracao: ");
	scanf("%s",d[num].resumo);
	system("cls");
}

void mostrar(char reg[80],descricao d[100],int i){
	if(strcmp(d[i].regiao,reg) == 0){
		printf("\n");
		printf("Nome: %s",d[i].nome);
		printf("\n");
		printf("Local: %s",d[i].local);
		printf("\n");
		printf("Tipo: %s",d[i].tipo);
		printf("\n");
		printf("Qualidade: %s",d[i].qualidade);
		printf("\n");
		printf("Resumo: %s",d[i].resumo);
		printf("\n");
	}
}

void mostrarUnico(char reg[80],descricao d[100],char nome[80]){
	for(int i = 0;i < 100;i++){
		if(strcmp(d[i].regiao,reg) == 0 && strcmp(d[i].nome,nome) == 0){
			printf("\n");
			printf("Nome: %s",d[i].nome);
			printf("\n");
			printf("Local: %s",d[i].local);
			printf("\n");
			printf("Tipo: %s",d[i].tipo);
			printf("\n");
			printf("Qualidade: %s",d[i].qualidade);
			printf("\n");
			printf("Resumo: %s",d[i].resumo);
			printf("\n");
		}
	}
}

void menuConsultar(descricao d[100]){
	int op = 1;
	while(op != 0){
		printf("\n");
		printf("=====================\n");
		printf(" [1] - Centro-Oeste \n");
		printf(" [2] - Norte\n");
		printf(" [3] - Nordeste\n");
		printf(" [4] - Sul\n");
		printf(" [5] - Suldeste\n");
		printf(" [0] - Voltar\n");
		printf("======================\n");
		printf("Digite a opcao desejada: \n");
		scanf("%d",&op);
		system("cls");
 		
 		int i = 0;
		if(op == 1){
			while(i < 100){
				mostrar("centroOeste",d,i);
				i++;
			}
			i = 0;
		}else if(op == 2){
			while(i < 100){
				mostrar("norte",d,i);
				i++;
			}
			i = 0;
		}else if(op == 3){
			while(i < 100){
				mostrar("nordeste",d,i);
				i++;
			}
			i = 0;
		}else if(op == 4,d){
			while(i < 100){
				mostrar("sul",d,i);
				i++;
			}
			i = 0;
		}else if(op == 5){
			while(i < 100){
				mostrar("suldeste",d,i);
				i++;
			}
			i = 0;
		}else if(op < 0 || op >= 6){
			printf("Opcao Invalida");
		}
	}
}


void menuConectar(descricao d[100],int num){
	int op = 1;
	while(op != 0){
		printf("\n");
		printf("=====================\n");
		printf(" [1] - Centro-Oeste \n");
		printf(" [2] - Norte\n");
		printf(" [3] - Nordeste\n");
		printf(" [4] - Sul\n");
		printf(" [5] - Suldeste\n");
		printf(" [0] - Voltar\n");
		printf("======================\n");
		printf("Digite a opcao desejada: \n");
		scanf("%d",&op);
		system("cls");

		if(op == 1){
			int op2 = 1;
			char nome[80];
			while(op2 != 0){
				printf("=============================\n");
				printf("[1] - Incluir uma descricao\n");
				printf("[2] - Alterar uma descricao\n");
				printf("[3] - Excluir uma descricao\n");
				printf("[4] - Mostrar uma descricao\n");
				printf("[0] - Voltar\n");
				printf("=============================\n");
				scanf("%d",&op2);
				system("cls");
		
				if(op2 == 1){
					incluir("centroOeste",d,num);
					num++;

				}else if(op2 == 2){
					printf("Digite o nome da atracao a ser alterada: ");
					scanf("%s",nome);
					alterar("centroOeste",d,nome);
					system("cls");

				}else if(op2 == 3){
					printf("Digite o nome da atracao a ser excluida: ");
					scanf("%s",nome);
					excluir("centroOeste",d,nome);
					
				}else if(op2 == 4){
					printf("Digite o nome da atracao a ser mostrada: ");
					scanf("%s",nome);
					mostrarUnico("centroOeste",d,nome);	
					printf("\n");

				}else if(op2 < 0 || op2 > 4){
					printf("Opcao invalida");
				}
			}
		}else if(op == 2){
			int op2 = 1;
			char nome[80];
			while(op2 != 0){
				printf("=============================\n");
				printf("[1] - Incluir uma descricao\n");
				printf("[2] - Alterar uma descricao\n");
				printf("[3] - Excluir uma descricao\n");
				printf("[4] - Mostrar uma descricao\n");
				printf("[0] - Voltar\n");
				printf("=============================\n");
				scanf("%d",&op2);
				system("cls");

				if(op2 == 1){
					incluir("norte",d,num);
					num++;

				}else if(op2 == 2){
					printf("Digite o nome da atracao a ser alterada: ");
					scanf("%s",nome);
					alterar("norte",d,nome);
					
				}else if(op2 == 3){
					printf("Digite o nome da atracao a ser excluida: ");
					scanf("%s",nome);
					excluir("norte",d,nome);
						
				}else if(op2 == 4){
					printf("Digite o nome da atracao a ser mostrada: ");
					scanf("%s",nome);
					mostrarUnico("norte",d,nome);	
					printf("\n");

				}else if(op2 < 0 || op2 > 4){
					printf("Opcao invalida");
				}
			}

		}else if(op == 3){
			int op2 = 1;
			char nome[80];
			while(op2 != 0){
				printf("=============================\n");
				printf("[1] - Incluir uma descricao\n");
				printf("[2] - Alterar uma descricao\n");
				printf("[3] - Excluir uma descricao\n");
				printf("[4] - Mostrar uma descricao\n");
				printf("[0] - Voltar\n");
				printf("=============================\n");
				scanf("%d",&op2);
				system("cls");

				if(op2 == 1){
					incluir("nordeste",d,num);
					num++;

				}else if(op2 == 2){
					printf("Digite o nome da atracao a ser alterada: ");
					scanf("%s",nome);
					alterar("nordeste",d,nome);
					

				}else if(op2 == 3){
					printf("Digite o nome da atracao a ser excluida: ");
					scanf("%s",nome);
					excluir("nordeste",d,nome);
					
	
				}else if(op2 == 4){
					printf("Digite o nome da atracao a ser mostrada: ");
					scanf("%s",nome);
					mostrarUnico("nordeste",d,nome);	
					printf("\n");

				}else if(op2 < 0 || op2 > 4){
					printf("Opcao invalida");
				}
			}

		}else if(op == 4){
			int op2 = 1;
			char nome[80];

			while(op2 != 0){
				printf("=============================\n");
				printf("[1] - Incluir uma descricao\n");
				printf("[2] - Alterar uma descricao\n");
				printf("[3] - Excluir uma descricao\n");
				printf("[4] - Mostrar uma descricao\n");
				printf("[0] - Voltar\n");
				printf("=============================\n");
				scanf("%d",&op2);
				system("cls");

				if(op2 == 1){
					incluir("sul",d,num);
					num++;

				}else if(op2 == 2){
					printf("Digite o nome da atracao a ser alterada: ");
					scanf("%s",nome);
					alterar("sul",d,nome);
					

				}else if(op2 == 3){
					printf("Digite o nome da atracao a ser excluida: ");
					scanf("%s",nome);
					excluir("sul",d,nome);
					
				}else if(op2 == 4){
					printf("Digite o nome da atracao a ser mostrada: ");
					scanf("%s",nome);
					mostrarUnico("sul",d,nome);	
					printf("\n");

				}else if(op2 < 0 || op2 > 4){
					printf("Opcao invalida");
				}
			}

		}else if(op == 5){
			int op2 = 1;
			char nome[80];
			while(op2 != 0){
				printf("=============================\n");
				printf("[1] - Incluir uma descricao\n");
				printf("[2] - Alterar uma descricao\n");
				printf("[3] - Excluir uma descricao\n");
				printf("[4] - Mostrar uma descricao\n");
				printf("[0] - Voltar\n");
				printf("=============================\n");
				scanf("%d",&op2);
				system("cls");

				if(op2 == 1){
					incluir("sudeste",d,num);
					num++;

				}else if(op2 == 2){
					printf("Digite o nome da atracao a ser alterada: ");
					scanf("%s",nome);
					alterar("sudeste",d,nome);
					
				}else if(op2 == 3){
					printf("Digite o nome da atracao a ser excluida: ");
					scanf("%s",nome);
					excluir("sudeste",d,nome);
					
				}else if(op2 == 4){
					printf("Digite o nome da atracao a ser mostrada: ");
					scanf("%s",nome);
					mostrarUnico("sudeste",d,nome);	
					printf("\n");

				}else if(op2 < 0 || op2 > 4){
					printf("Opcao invalida");
				}
			}


		}else if(op < 0 || op > 5){
			printf("Opcao invalida");
		}
	}
}


void menuIniciar(){
	descricao d[100];
	recebe r;
	int num = 0;
	FILE *f = fopen("agenda.bin","rb");
	if(f == NULL){
		printf("Nao tem arquivo");
		printf("\n");
	}else{
		while(fread(&r,sizeof(descricao),1,f)){
			strcpy(d[num].regiao,r.regiao);
			strcpy(d[num].nome,r.nome);
			strcpy(d[num].local,r.local);
			strcpy(d[num].tipo,r.tipo);
			strcpy(d[num].qualidade,r.qualidade);
			strcpy(d[num].resumo,r.resumo);
			num++;
		}
	}
	int op = 1;
	while(op != 0){
		printf("\n");
		printf("========================================\n");
		printf(" [1] - Conectar a uma regiao \n");
		printf(" [2] - Consultar os dados de uma regiao\n");
		printf(" [0] - Sair do programa\n");
		printf("========================================\n");
		printf("Digite a opcao desejada: \n");
		scanf("%d",&op);
		system("cls");

		if(op == 1){
			menuConectar(d,num);

		}else if(op == 2){
			menuConsultar(d);

		}else if(op == 0){
			printf("Saindo do programa...");
			FILE *f = fopen("agenda.bin","ab");
			fwrite(&d,sizeof(descricao),100,f);
			fclose(f);
		}else{
			printf("Opcao invalida\n");
		}
	}	
}

void main(){
	menuIniciar();
}
