#include <stdio.h>
#include <stdlib.h>
#include "info.cpp"
#include "Perguntas.cpp"



int menu(){
	
	int opcao;
	

		system("cls");
        printf("\n\tSelecione uma das opções do Menu para começar!\n\n");
		printf ("\t*------------------------------------------------------*\n");    
		printf ("\t|                    MENU DE OPCOES                    |\n");
		printf ("\t*------------------------------------------------------*\n");
		printf ("\t|  0 - SAIR DO GAME                                    |\n");
		printf ("\t|  1 - JOGAR TODOS OS NIVEIS - GAME COMPLETO COM MEMES |\n");
		printf ("\t|  2 - JOGAR NIVEL FACIL - SOMENTE O NIVEL FACIL       |\n");           
		printf ("\t|  3 - JOGAR NIVEL MEDIO - SOMENTE O NIVEL MEDIO       |\n");
		printf ("\t|  4 - JOGAR NIVEL DIFICIL - SOMENTE O NIVEL DIFICIL   |\n");
		printf ("\t|  5 - VER INSTRUCOES DO JOGO E INFORMACOES            |\n");
		printf ("\t|  6 - VER OS DESENVOLVEDORES                          |\n");
		printf ("\t*------------------------------------------------------*\n");
		printf ("\n\tO QUE DESEJA FAZER ? ");                                            
		scanf ("%d",&opcao);
		
	return opcao;
}

