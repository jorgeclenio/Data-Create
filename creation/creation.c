#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

struct dados_cliente{
	char nome[50];
	char nascimento[50];
	char idade[50];
	char endereco[50];
	char email[50];
	char fixo[50];
	char celular[50];
	char cpf[50];
	char rg[50];
	char sexo[50];
}dados;

int main(void){
	system("color 0a");
	system("title Data Creator - v0.1");	
	setlocale(LC_ALL,"Portuguese");
	
	int opcao;
	char frase[4096];
	char nome_arquivo_escrita[50];
	char nome_arquivo_leitura[50];
	
	do{
		printf("-------------> MENU PRINCIPAL <-------------\n");
		printf("[1] CRIAR ARQUIVO TXT DE DADOS\n");
		printf("[2] LER ARQUIVO TXT DE DADOS\n");
		printf("[3] MODO DE USO\n");
		printf("[4] CRÉDITOS\n\n");
		printf("[0] SAIR\n");
		printf("--------------------------------------------\n");
		printf("--> OPÇÃO: ");
		scanf("%d",&opcao);
		
		system("cls || clear");
		
		switch(opcao){
			case 0:
				printf("--> SAINDO DO PROGRAMA, OBRIGADO PELO USO!\n");
				exit(0);
				break;
			case 1:
				printf("--> MODO DE CRIAÇÃO DE ARQUIVO TXT DE DADOS SELECIONADO!\n\n");
				FILE *file;
				printf("--> Insira aqui o nome do arquivo que deseja criar: ");
				scanf("%s",&nome_arquivo_escrita);
				file=fopen(nome_arquivo_escrita,"w");
				
				system("cls || clear");
				
				printf("-------------------- ÁREA DE CADASTRO DOS DADOS --------------------\n\n");
				printf("Nome completo.......: ");
				fflush(stdin);
				fgets(dados.nome,50,stdin);
				printf("Data de nascimento..: ");
				fflush(stdin);
				fgets(dados.nascimento,50,stdin);
				printf("Idade...............: ");
				fflush(stdin);
				fgets(dados.idade,50,stdin);
				printf("Endereço............: ");
				fflush(stdin);
				fgets(dados.endereco,50,stdin);
				printf("Email...............: ");
				fflush(stdin);
				fgets(dados.email,50,stdin);
				printf("Telefone fixo.......: ");
				fflush(stdin);
				fgets(dados.fixo,50,stdin);
				printf("Telefone celular....: ");
				fflush(stdin);
				fgets(dados.celular,50,stdin);
				printf("CPF.................: ");
				fflush(stdin);
				fgets(dados.cpf,50,stdin);
				printf("RG..................: ");
				fflush(stdin);
				fgets(dados.rg,50,stdin);
				printf("Sexo................: ");
				fflush(stdin);
				fgets(dados.sexo,50,stdin);
				printf("\n------------------ CADASTRO FINALIZADO COM SUCESSO -----------------\n\n");
				
				fprintf(file,"-------------------- DADOS DO CLIENTE CADASTRADO --------------------\n\n");
				fprintf(file,"Nome completo.......: %s",dados.nome);
				fprintf(file,"Data de nascimento..: %s",dados.nascimento);
				fprintf(file,"Idade...............: %s",dados.idade);
				fprintf(file,"Endereço............: %s",dados.endereco);
				fprintf(file,"Email...............: %s",dados.email);
				fprintf(file,"Telefone fixo.......: %s",dados.fixo);
				fprintf(file,"Telefone celular....: %s",dados.celular);
				fprintf(file,"CPF.................: %s",dados.cpf);
				fprintf(file,"RG..................: %s",dados.rg);
				fprintf(file,"Sexo................: %s",dados.sexo);
				fprintf(file,"\n---------------------------------------------------------------------\n");
				fclose(file);
				system("pause");
				break;
			case 2:
				printf("--> MODE DE LEITURA DE ARQUIVO TXT DE DADOS SELECIONADO!\n\n");
				FILE *file_new;
				printf("--> Insira aqui o nome do arquivo que deseja buscar: ");
				scanf("%s",&nome_arquivo_leitura);
				file_new=fopen(nome_arquivo_leitura,"r");
				
				system("cls || clear");				
				
				if(file_new==NULL){
					printf("--> ERRO: Arquivo não encontrado!\n\n");
				}else{
					while(fgets(frase,4096,file_new)!=NULL){
						printf("%s",frase);
					}
					printf("\n");
				}
				fclose(file_new);
				system("pause");
				break;
			case 3:
				printf("--> MODO DE USO SELECIONADO! -----------------------------------------\n\n");
				printf("[1] Você pode inserir todos os dados completos, exceto acentuação. \n");
				printf("[2] Pode colocar CPF e RG com a devida separação ou não.\n");
				printf("[3] Pode colocar data com a devida separação ou não.\n");
				printf("[4] Para terminar a execução do programa, pressione 'Ctrl + C' ou  \n");
				printf("    0 (zero) no menu principal.\n\n");				
				printf("----------------------------------------------------------------------\n");
				system("pause");
				break;
			case 4:
				printf("--> MODO CRÉDITOS SELECIONADO! ---------------------------------------\n\n");
				printf("[*] Desenvolvedor: Jorge Clênio da Silva Junior\n");
				printf("[*] Email: cleniocontato@gmail.com\n");
				printf("[*] Data: 29/01/2018\n");
				printf("[*] Linguagem Utilizada: C\n");
				printf("[*] Hora de Conclusão: 22:05:46 pm\n");
				printf("[*] Curso: Engenharia da Computação\n");
				printf("[*] Versão: 1.0.3\n\n");
				printf("----------------------------------------------------------------------\n");
				system("pause");
				break;
			default:
				printf("--> OPÇÃO INVÁLIDA, SELECIONE OUTRA OPÇÃO!\n\n");
				system("pause");
		}system("cls || clear");
	}while(opcao);	
}
