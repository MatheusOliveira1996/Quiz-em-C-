#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <Windows.h>
#include "menu.cpp"
#include "instrucoes.cpp"

int opcao;


void logica(int opcao);
void resultado();

int main() {
	
	
        SetConsoleOutputCP(65001);

        printf("\n");
        printf("\t  ###    ##   ##   ######  #######           ##   ##  #######  ######   #####   \n");
        printf("\t ## ##   ##   ##     ##    ##  ##            ###  ##   ##   #   ##  ##   ## ##  \n");
        printf("\t##   ##  ##   ##     ##       ##             #### ##   ##       ##  ##   ##  ## \n");
        printf("\t##   ##  ##   ##     ##      ##              #######   ####     #####    ##  ## \n");
        printf("\t##   ##  ##   ##     ##     ##               ## ####   ##       ## ##    ##  ## \n");
        printf("\t ## ##   ##   ##     ##    ##   ##           ##  ###   ##   #   ## ##    ## ##  \n");
        printf("\t  ####    #####    ######  #######           ##   ##  #######  #### ##  #####   \n");
        printf("\t     ##                                                                         \n\n");

	system("pause");
        menu:
	opcao = menu();

        system("cls");

        switch(opcao){
                case 0:
                        system("cls");
                        printf("\n\tTchau, muito obrigado pela preferencia!\n");
                        break;
                case 1:
                {
                        perguntasFaceis();
	                perguntasMedias();
	                perguntasDificeis();
                        system("pause");
                        resultado();
                        break;
                }
                case 2:
                {
                        perguntasFaceis();
                        system("pause");
                        resultado();
                        break;
                }
                case 3:
                {
                        perguntasMedias();
                        system("pause");
                        resultado();
                        break;
                }
                case 4:
                {
                        perguntasDificeis();
                        system("pause");
                        resultado();
                        break;
                }
                case 5:
                {
                        instrucoes();
                        system("pause");
                        goto menu;
                }
                case 6:
                {
                        info();
                        system("pause");
                        goto menu;
                }
                default:
                {
                        printf("\n\tA opção selecionada não existe. Tente novamente\n\n");
                        system("pause");
                        goto menu;
                }
        }
}

void resultado(){
        system("cls"); 
	pontostotal=(certo_1*150)+(certo_2*200)+(certo_3*250);
        printf("\n\n\t\tQUIZ ENCERRADO\n\t\tCONFIRA OS RESULTADOS...\n\t\t");
        printf ("\n\t\tTotal de acertos: %d \n",certo_1 + certo_2 + certo_3);
	printf ("\t\tTotal de erros: %d \n",errado);
	printf("\t\tPontuação: %d \n\n",pontostotal);
}






