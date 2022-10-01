#include <stdio.h>
#include <stdlib.h>
#include <math.h>
	
void menu(){
    float 	valor1;
    float 	valor2;
   	int	valor3; 
	int operacao;
	float result;
	
    printf("\n \n### CALCULADORA ###\n");
    printf("Insira o primeiro valor da operação matemática:\n");
    scanf("%f", &valor1);

    

    printf("\n Informe a operação matemática:\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Divisao\n");
    printf("4 - Multiplicacao\n");
	printf("5 - Potencia\n");
	printf("6 - Raiz quadrada\n");
	
    printf("Escolha a operação:");
    scanf("%d", &operacao);

    switch(operacao){
        case 1: //soma
        	printf("\n Insira o segundo valor da operação matemática:\n");
    		scanf("%f", & valor2);
            result = valor1 + valor2;
            printf("O resultado da soma é:%f\n" , result);
            menu();
            

        case 2: //subtraçao
        	printf("\n Insira o segundo valor da operação matemática:\n");
    		scanf("%f", & valor2);
            result = valor1 - valor2;
            printf("O resultado da soma é:%f\n" , result);
            menu();
            

        case 3: //div
        	printf("\n Insira o segundo valor da operação matemática:\n");
    		scanf("%f", & valor2);
            result = valor1 / valor2;
            printf("O resultado da soma é:%f\n" , result);
            menu();
            

        case 4: //mult
        	printf("\n Insira o segundo valor da operação matemática:\n");
    		scanf("%f", & valor2);
            result = valor1 * valor2;
            printf("O resultado da multiplicacao é:%f\n" , result);
            menu();
            
		case 5: //pot
			printf("\n Insira qual a o potencia voce quer elevar:\n");
    		scanf("%d", & valor3);
            result = pow(valor1,valor3);
            printf("O resultado da potencia é:%f\n" , result);
            menu();
            
		case 6: //raiz
			result = sqrt(valor1);
			printf("\n O resultado da raiz é:%f\n" , result);
            menu();
            
        default:
            printf("\n Valor incorreto! \n");
            menu();
    }
}
int main(){
	printf(" Nome: Lucas de Brito Fortes\n Universidade: Unilasalle\n Curso: Gestao da tecnologia da informacao\n Matricula:202222122");
	menu();
}

// Referencias:
// https://www.programiz.com/c-programming/library-function/math.h/pow
// https://www.programiz.com/c-programming/library-function/math.h/sqrt
// https://gist.github.com/Windemberg/7bafa79906d3aca03dc52f39c030fa5e

// Prints:
// https://prnt.sc/mBOov-MGEiXg
// https://prnt.sc/w8RI0W950s8A
