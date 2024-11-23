#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h>//biblioteca de alocações de texto por região
#include <string.h>//biblioteca resposável por cuidar dos strings

   int registro()//Função responsavel por cadastrar os usuários
{
	//inicio criação de variáveis/string
    char arquivo[40];
    char cpf[40];
    char nome[40];
    char sobrenome[40];
    char cargo[40];
    //Final criação de variáveis/string
    
    printf("Digite o cpf a ser cadastrado:"); //coletando informações do usuário
    scanf("%s",cpf);//%s refere-se a strin
    
    strcpy(arquivo,cpf); //responsavel por copiaros valores das strings
    
    FILE *file; //cria o arquivo
    file = fopen(arquivo,"w"); //cria o arquivo e o "w" significa escrever
    fprintf(file,cpf); //salva o valor da variavel
    fclose(file); //fecha o arquivo
    
    file = fopen(arquivo,"a");
    fprintf(file,",");
    fclose(file);
    
    printf("Digite o nome a ser cadastrado");
    scanf("%s",nome);
    
    file = fopen(arquivo,"a");
    fprintf(file,nome);
    fclose(file);

    file = fopen(arquivo,"a");
    fprintf(file,",");
    fclose(file);

    printf("Digite o sobrenome a ser cadastrado");
    scanf("%s,nome");
    
    file = fopen(arquivo,"a");
    fprintf(file,sobrenome);
    fclose(file);
    
    file = fopen(arquivo,"a");
    fprintf(file,",");
    fclose(file);
    
    printf("Digite o cargo a ser cadastrado");
    scanf("%s,cargo");
    
    file = fopen(arquivo,"a");
    fprintf(file,cargo);
    fclose(file);
    
    system("pause");
	}
	
   
   int consulta()
   {
   	setlocale(LC_ALL, "Portuguese");
   	char cpf[40];
   	char conteudo [200];
   	
   	 printf("Digite o CPF a ser Consultado:");
   	 scanf("%s",cpf);
   	 
   	 FILE *file;
   	 file = fopen(cpf,"r");
   	 
   	 if(file==NULL)
   	 {
   	 	printf("NÂO FOI POSSÍVEL ABRIR O ARQUIVO, NÂO LOCALIZADO!.\n");
		}
   	 
   	 while(fgets(conteudo, 200, file) !=NULL)
   {
   	printf("\nEssas são as informações do usuário:");
   	printf("%s",conteudo);
   	printf("\n\n");
   	
   }
   	 
   	 system("pause");
   	 
   }
   
   int deletar()
   {
   	 char cpf[40];
   	 printf("Digite o CPF a ser deletado:");
   	 scanf("%s",cpf);
   	 
   	 remove(cpf);
   	 
   	 FILE *file;
		file = fopen(cpf,"r");
		
		if(file == NULL);
{

	printf("O usuário não se encontra no sistema!.\n");
	system("pause");
    } 
		
	}
	
    int main ()
{
	
	    int opcao=0;	//Definindo variáveis
        int x=1;
        char senhadigitada[10]="a";
        int comparacao;
        
        printf("### Cartório da EBAC ###\n\n");
        printf("Login de administrador!/n/nDigite a sua senha:");
        scanf("%s",senhadigitada);
        
        comparacao = strcmp(senhadigitada,"admin");
        
        if(comparacao == 0 )
       {
		system ("csl");
        for(x=1;x=1;)	
        	
   {
	    
		system("cls"); //responsável por limpar a tela
	    setlocale(LC_ALL, "Portuguese");// Definindo a linguagem 
 
        printf("### Arquivo de Alunos da EBAC ###\n\n" );//inicio do menu
        printf("\tEscolha sua opção no Menu:\n\n");
        printf("\t1 - Registrar Nome\n");
        printf("\t2 - Consultar Nome\n");
        printf("\t3 - Deletar Nome\n\n");
        printf("\t4 - Sair do sistema\n\n");//fim do menu
	    printf("Opção: ");//fim do menu
        scanf("%d" , &opcao);//armazenando a escolha do usuário

        system("cls");


        switch(opcao)//inicio da seleção do menu
   {
	  
        case 1:
    registro();//chamada de funções
      break;
        	
        case 2:
    consulta();
		break;	
		
		case 3:
	deletar();
		break;

        case 4:
        	printf("Obrigada por utilizar o sistema!\n");
        	return 0;
        	break;
        	
        default:
	    printf("Essa opção não está disponível!\n");
	    system("pause");
	    break; 
	
}//fim da seleção
}
}
		
else
printf("Senha Incorreta!");		

}

