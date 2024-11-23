#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h>//biblioteca de aloca��es de texto por regi�o
#include <string.h>//biblioteca respos�vel por cuidar dos strings

   int registro()//Fun��o responsavel por cadastrar os usu�rios
{
	//inicio cria��o de vari�veis/string
    char arquivo[40];
    char cpf[40];
    char nome[40];
    char sobrenome[40];
    char cargo[40];
    //Final cria��o de vari�veis/string
    
    printf("Digite o cpf a ser cadastrado:"); //coletando informa��es do usu�rio
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
   	 	printf("N�O FOI POSS�VEL ABRIR O ARQUIVO, N�O LOCALIZADO!.\n");
		}
   	 
   	 while(fgets(conteudo, 200, file) !=NULL)
   {
   	printf("\nEssas s�o as informa��es do usu�rio:");
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

	printf("O usu�rio n�o se encontra no sistema!.\n");
	system("pause");
    } 
		
	}
	
    int main ()
{
	
	    int opcao=0;	//Definindo vari�veis
        int x=1;
        char senhadigitada[10]="a";
        int comparacao;
        
        printf("### Cart�rio da EBAC ###\n\n");
        printf("Login de administrador!/n/nDigite a sua senha:");
        scanf("%s",senhadigitada);
        
        comparacao = strcmp(senhadigitada,"admin");
        
        if(comparacao == 0 )
       {
		system ("csl");
        for(x=1;x=1;)	
        	
   {
	    
		system("cls"); //respons�vel por limpar a tela
	    setlocale(LC_ALL, "Portuguese");// Definindo a linguagem 
 
        printf("### Arquivo de Alunos da EBAC ###\n\n" );//inicio do menu
        printf("\tEscolha sua op��o no Menu:\n\n");
        printf("\t1 - Registrar Nome\n");
        printf("\t2 - Consultar Nome\n");
        printf("\t3 - Deletar Nome\n\n");
        printf("\t4 - Sair do sistema\n\n");//fim do menu
	    printf("Op��o: ");//fim do menu
        scanf("%d" , &opcao);//armazenando a escolha do usu�rio

        system("cls");


        switch(opcao)//inicio da sele��o do menu
   {
	  
        case 1:
    registro();//chamada de fun��es
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
	    printf("Essa op��o n�o est� dispon�vel!\n");
	    system("pause");
	    break; 
	
}//fim da sele��o
}
}
		
else
printf("Senha Incorreta!");		

}

