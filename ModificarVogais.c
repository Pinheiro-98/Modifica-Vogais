/*Faça um programa que modifique as vogais de uma frase. O programa deve ler uma frase (max. 100 caracteres) e armazená-la num vetor. 
Imprimir a frase lida trocando as vogais, isto é, trocar 'a' pelo 'u', 'e' pelo 'o', 'i' pelo 'u', 'o' pelo 'a' e o 'u' pelo 'e'. 
Usar umprocedimento para realizar a troca e outro para realizar a impressão da frase trocada. 
A função deve ter como parâmetro um ponteiro char referente ao vetor. 
Dica: Use a função fgets() da biblioteca string.h para realizar a leitura da frase. 
Use  o  switch  para  realizar  as  trocas.  Só  considere  as  letrasminúsculas. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main (){
		
	char desejo[100];
	int i = 0;
	
	printf("O que voce mais deseja: ");
	fgets(desejo, 100, stdin);
	
	char *seu_desejo = desejo; 
		
	for (i=0; *seu_desejo; i++){
		switch (tolower(*seu_desejo)){
		case 'a':
			*seu_desejo = 'i';
			 break;
	  	case 'e':
	 		*seu_desejo = 'o';
			break;
		case 'i':
		  	*seu_desejo = 'u';
		  	break;
	  	case 'o':
			*seu_desejo = 'a';
	  		break;
	   	case 'u':
	  		*seu_desejo = 'e';
	  		break;
		default:
			break; 
		}
		seu_desejo++;
	}
	printf("O seu desejo e: %s", desejo);
}

/* Fgets utilizado com sucesso*/