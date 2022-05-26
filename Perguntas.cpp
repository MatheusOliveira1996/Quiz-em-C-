#include <stdlib.h>
#include <stdio.h>
#include <process.h>

char resposta;
int certo_1 = 0, certo_2 = 0, certo_3 = 0, errado = 0, dica = 0, pontostotal = 0;

void result();

void perguntasFaceis()
{

	system("cls");
	printf("\n");
	system("color 2F");
	printf("      *---------------------------------------------*\n");
	printf("      || XXX    XX  XX  XX     XX  XXXXXXX  XX     ||            \n");
	printf("      || XX X   XX  XX  XX     XX  XX       XX     ||             \n");
	printf("      || XX  X  XX  XX   XX   XX   XXXXX    XX     ||             \n");
	printf("      || XX   X XX  XX    XX XX    XX       XX     ||             \n");
	printf("      || XX    XXX  XX     XXX     XXXXXXX  XXXXXX ||             \n");
	printf("      *---------------------------------------------*\n");
	printf("      || XXXXXXX   XXXXX    XXXXX  XX  XX          ||           \n");
	printf("      || XX       XX   XX  XX      XX  XX          ||           \n");
	printf("      || XXXXX    XXXXXXX  XX      XX  XX          ||             \n");
	printf("      || XX       XX   XX  XX      XX  XX          ||              \n");
	printf("      || XX       XX   XX   XXXXX  XX  XXXXXX      ||               \n");
	printf("      *---------------------------------------------*\n\n");
	system("pause");
	system("cls");

// 1º questão facil
pergunta1:
	system("cls");
	printf("\t\t*--------------------------------*\n");
	printf("\t\t|  Pergunta n. 1 - Nivel Facil  |\n");
	printf("\t\t*--------------------------------*\n\n");
	printf("\t\tEm que ano foi lançado o primeiro filme do Homem de Ferro, dando início ao Universo da Marvel?\n\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tA) 2005\n");
	printf("\t\tB) 2008\n");
	printf("\t\tC) 2010\n");
	printf("\t\tD) 2012\n");
	printf("\t\tE) Dica\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tResposta ?  ");
	scanf("%s", &resposta);

	if ((resposta == 'e') || (resposta == 'E'))
	{
		printf("\n\t\tFoi lançado antes de 2010\n\n");
		dica++;
		system("pause");
		goto pergunta1;
	}
	else
	{

		if ((resposta == 'b') || (resposta == 'B'))
		{
			printf("\t\tResposta correta\n");
			certo_1++;
		}
		else
		{
			printf("\t\tResposta errada\n");
			printf("\t\tResposta correta: Letra \"B\"\n");
			errado++;
		}
	}

	// 2º questão facil

	printf("\t\t----------------------------------\n");
	system("pause");
pergunta2:
	system("cls");
	printf("\t\t*--------------------------------*\n");
	printf("\t\t|  Pergunta n. 2 - Nivel Facil  |\n");
	printf("\t\t*--------------------------------*\n\n");
	printf("\t\tQual é o nome do martelo de Thor?\n\n");
	printf("\t\tA) Vanirn\n");
	printf("\t\tB) Mjolnir\n");
	printf("\t\tC) Aesir\n");
	printf("\t\tD) Norn\n");
	printf("\t\tE) Dica\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tResposta ?  ");
	scanf("%s", &resposta);

	if ((resposta == 'e') || (resposta == 'E'))
	{
		printf("\n\t\tPossui as letras I, N e R\n\n");
		dica++;
		system("pause");
		goto pergunta2;
	}
	else
	{

		if (resposta == 'b' || resposta == 'B')
		{
			printf("\t\tResposta certa\n");
			certo_1++;
		}
		else
		{
			printf("\t\tResposta errada\n");
			printf("\t\tResposta correta: Letra \"B\"\n");
			errado++;
		}
	}

	// 3º questão facil
	if (errado >= 3)
	{
		printf("\n\t\tAs vidas acabaram!\n\n");
		system("pause");
		result();
		system("pause");
		exit(0);
	}

	printf("\t\t----------------------------------\n");
	system("pause");
pergunta3:
	system("cls");
	printf("\t\t|  Pergunta n. 3 - Nivel Facil  |\n");
	printf("\t\t*--------------------------------*\n\n");
	printf("\t\tDo que é feito o escudo do Capitão América?\n\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tA) Adamantium\n");
	printf("\t\tB) promécio\n");
	printf("\t\tC) Vibranium\n");
	printf("\t\tD) Carbonádio\n");
	printf("\t\tE) Dica\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tResposta ?  ");
	scanf("%s", &resposta);

	if ((resposta == 'e') || (resposta == 'E'))
	{
		if (dica < 2)
		{
			printf("\n\t\tTem em abundancia em wakanda\n\n");
			system("pause");
			dica++;
			goto pergunta3;
		}
		else
		{
			printf("\n\t\tO direito as dicas acabaram!\n\n");
			system("pause");
			goto pergunta3;
		}
	}
	if ((resposta == 'c') || (resposta == 'C'))
	{
		printf("\t\tResposta correta\n");
		certo_1++;
	}
	else
	{
		printf("\t\tResposta errada\n");
		printf("\t\tResposta correta: Letra \"C\"\n");
		errado++;
	}

	// 4º questão facil
	if (errado >= 3)
	{
		printf("\n\t\tAs vidas acabaram!\n\n");
		system("pause");
		result();
		system("pause");
		exit(0);
	}

	printf("\t\t----------------------------------\n");
	system("pause");
pergunta4:
	system("cls");
	printf("\t\t*--------------------------------*\n");
	printf("\t\t|  Pergunta n. 4 - Nivel Facil  |\n");
	printf("\t\t*--------------------------------*\n\n");
	printf("\t\tAntes de se tornar Vision, qual é o nome do mordomo de IA do Homem de Ferro?\n\n");
	printf("\t\tA) JARVIS\n");
	printf("\t\tB) HOMER\n");
	printf("\t\tC) MARVIN\n");
	printf("\t\tD) ALFRED\n");
	printf("\t\tE) Dica\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tResposta ?  ");
	scanf("%s", &resposta);

	if ((resposta == 'e') || (resposta == 'E'))
	{
		if (dica < 2)
		{
			printf("\n\t\tO mordomo do pai do Tony Stark possuia o mesmo nome\n\n");
			system("pause");
			dica++;
			goto pergunta4;
		}
		else
		{
			printf("\n\t\tO direito as dicas acabaram!\n\n");
			system("pause");
			goto pergunta4;
		}
	}

	if (resposta == 'a' || resposta == 'A')
	{
		printf("\t\tResposta certa\n");
		certo_1++;
	}
	else
	{
		printf("\t\tResposta errada\n");
		printf("\t\tResposta correta: Letra \"A\"\n");
		errado++;
	}

	// 5º pergunta facil
	if (errado >= 3)
	{
		printf("\n\t\tO direito as vidas acabaram\n\n");
		system("pause");
		exit(0);
	}

	printf("\t\t----------------------------------\n");
	system("pause");
pergunta5:
	system("cls");
	printf("\t\t*--------------------------------*\n");
	printf("\t\t|  Pergunta n. 5 - Nivel Facil|\n");
	printf("\t\t*--------------------------------*\n\n");
	printf("\t\tQual é o verdadeiro nome da Pantera Negra?\n\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tA) N'Jobu\n");
	printf("\t\tB) N'Jadaka\n");
	printf("\t\tC) M'Baku\n");
	printf("\t\tD) T'Challa\n");
	printf("\t\tE) Dica\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tResposta ?  ");
	scanf("%s", &resposta);

	if ((resposta == 'e') || (resposta == 'E'))
	{
		if (dica < 2)
		{
			printf("\n\t\tNão e Baku e nem Jobu!\n\n");
			system("pause");
			dica++;
			goto pergunta5;
		}
		else
		{
			printf("\n\t\tO direito as dicas acabaram!\n\n");
			system("pause");
			goto pergunta5;
		}
	}
	if ((resposta == 'd') || (resposta == 'D'))
	{
		printf("\t\tResposta correta\n");
		certo_1++;
	}
	else
	{
		printf("\t\tResposta errada\n");
		printf("\t\tResposta correta: Letra \"D\"\n");
		errado++;
	}

	// 6º pergunta facil
	if (errado >= 3)
	{
		printf("\n\t\tAs vidas acabaram!\n\n");
		system("pause");
		result();
		system("pause");
		exit(0);
	}

	printf("\t\t----------------------------------\n");
	system("pause");
pergunta6:
	system("cls");
	printf("\t\t*---------------------------------*\n");
	printf("\t\t|  Pergunta n. 6 - Nivel Facil |\n");
	printf("\t\t*---------------------------------*\n\n");
	printf("\t\t Quem o Titã Louco sacrifica para adquirir a Pedra da Alma?\n\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tA) Nebulosa\n");
	printf("\t\tB) Ebony Maw\n");
	printf("\t\tC) Obsidiana de abate\n");
	printf("\t\tD) Gamora\n");
	printf("\t\tE) Dica\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tResposta ?  ");
	scanf("%s", &resposta);

	if ((resposta == 'e') || (resposta == 'E'))
	{
		if (dica < 2)
		{
			printf("\n\t\tE uma de suas filhas\n\n");
			system("pause");
			dica++;
			goto pergunta6;
		}
		else
		{
			printf("\n\t\tO direito as dicas acabaram!\n\n");
			system("pause");
			goto pergunta6;
		}
	}

	if ((resposta == 'd') || (resposta == 'D'))
	{
		printf("\t\tResposta correta\n");
		certo_1++;
	}
	else
	{
		printf("\t\tResposta errada\n");
		printf("\t\tResposta correta: Letra \"D\"\n");
		errado++;
	}

	// 7º pergunta facil
	if (errado >= 3)
	{
		printf("\n\t\tAs vidas acabaram!\n\n");
		system("pause");
		result();
		system("pause");
		exit(0);
	}

	printf("\t\t----------------------------------\n");
	system("pause");
pergunta7:
	system("cls");
	printf("\t\t*---------------------------------*\n");
	printf("\t\t|  Pergunta n. 7 - Nivel Facil |\n");
	printf("\t\t*---------------------------------*\n\n");
	printf("\t\t Quem é morto por Loki nos Vingadores?\n\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tA) Maria Hill\n");
	printf("\t\tB) Nick Fury\n");
	printf("\t\tC) Agente Coulson\n");
	printf("\t\tD) Doutor Erik Selvig\n");
	printf("\t\tE) Dica\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tResposta ?  ");
	scanf("%s", &resposta);

	if ((resposta == 'e') || (resposta == 'E'))
	{
		if (dica < 2)
		{
			printf("\n\t\tE um membro da S.H.I.E.L.D\n\n");
			system("pause");
			dica++;
			goto pergunta7;
		}
		else
		{
			printf("\n\t\tO direito as dicas acabaram!\n\n");
			system("pause");
			goto pergunta7;
		}
	}

	if ((resposta == 'c') || (resposta == 'C'))
	{
		printf("\t\tResposta correta\n");
		certo_1++;
	}
	else
	{
		printf("\t\tResposta errada\n");
		printf("\t\tResposta correta: Letra \"C\"\n");
		errado++;
	}

	// 8º pergunta facil
	if (errado >= 3)
	{
		printf("\n\t\tAs vidas acabaram!\n\n");
		system("pause");
		result();
		system("pause");
		exit(0);
	}

	printf("\t\t----------------------------------\n");
	system("pause");
pergunta8:
	system("cls");
	printf("\t\t*---------------------------------*\n");
	printf("\t\t|  Pergunta n. 8 - Nivel Facil |\n");
	printf("\t\t*---------------------------------*\n\n");
	printf("\t\t No Incrível Hulk, o que Tony diz a Thaddeus Ross no final do filme?\n\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tA) Que eles estão montando uma equipe\n");
	printf("\t\tB) Que ele sabe sobre a SHIELD\n");
	printf("\t\tC) Que ele quer estudar o Hulk\n");
	printf("\t\tD) Que Thaddeus lhe deve dinheiro\n");
	printf("\t\tE) Dica\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tResposta ?  ");
	scanf("%s", &resposta);

	if ((resposta == 'e') || (resposta == 'E'))
	{
		if (dica < 2)
		{
			printf("\n\t\tE a respeito de um time\n\n");
			system("pause");
			dica++;
			goto pergunta8;
		}
		else
		{
			printf("\n\t\tO direito as dicas acabaram!\n\n");
			system("pause");
			goto pergunta8;
		}
	}

	if ((resposta == 'a') || (resposta == 'A'))
	{
		printf("\t\tResposta correta\n");
		certo_1++;
	}
	else
	{
		printf("\t\tResposta errada\n");
		printf("\t\tResposta correta: Letra \"A\"\n");
		errado++;
	}

	// 9º pergunta facil
	if (errado >= 3)
	{
		printf("\n\t\tAs vidas acabaram!\n\n");
		system("pause");
		result();
		system("pause");
		exit(0);
	}

	printf("\t\t----------------------------------\n");
	system("pause");
pergunta9:
	system("cls");
	printf("\t\t*---------------------------------*\n");
	printf("\t\t|  Pergunta n. 9 - Nivel Facil |\n");
	printf("\t\t*---------------------------------*\n\n");
	printf("\t\tSobre que cidade Hawkeye e Viúva Negra costumam relembrar?\n\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tA)Praga\n");
	printf("\t\tB)Budapeste\n");
	printf("\t\tC)Istambul\n");
	printf("\t\tD)Sokovia\n");
	printf("\t\tE) Dica\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tResposta ?  ");
	scanf("%s", &resposta);

	if ((resposta == 'e') || (resposta == 'E'))
	{
		if (dica < 2)
		{
			printf("\n\t\tCapital da Hungria\n\n");
			system("pause");
			dica++;
			goto pergunta9;
		}
		else
		{
			printf("\n\t\tO direito as dicas acabaram!\n\n");
			system("pause");
			goto pergunta9;
		}
	}

	if ((resposta == 'b') || (resposta == 'B'))
	{
		printf("\t\tResposta correta\n");
		certo_1++;
	}
	else
	{
		printf("\t\tResposta errada\n");
		printf("\t\tResposta correta: Letra \"B\"\n");
		errado++;
	}

	// 10º pergunta facil
	if (errado >= 3)
	{
		printf("\n\t\tAs vidas acabaram!\n\n");
		system("pause");
		result();
		system("pause");
		exit(0);
	}

	printf("\t\t----------------------------------\n");
	system("pause");
pergunta10:
	system("cls");
	printf("\t\t*---------------------------------*\n");
	printf("\t\t|  Pergunta n. 10 - Nivel Facil |\n");
	printf("\t\t*---------------------------------*\n\n");
	printf("\t\tQuem é a irmã de Pantera Negra?\n\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tA) Shuri\n");
	printf("\t\tB) Nakia\n");
	printf("\t\tC) Ramonda\n");
	printf("\t\tD) Okoye\n");
	printf("\t\tE) Dica\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tResposta ?  ");
	scanf("%s", &resposta);

	if ((resposta == 'e') || (resposta == 'E'))
	{
		if (dica < 2)
		{
			printf("\n\t\tPossui R e I no nome\n\n");
			system("pause");
			dica++;
			goto pergunta10;
		}
		else
		{
			printf("\n\t\tO direito as dicas acabaram!\n\n");
			system("pause");
			goto pergunta10;
		}
	}

	if ((resposta == 'a') || (resposta == 'A'))
	{
		printf("\t\tResposta correta\n");
		certo_1++;
		printf("\t\t----------------------------------\n");
		system("pause");
		system("cls");
	}
	else
	{
		printf("\t\tResposta errada\n");
		printf("\t\tResposta correta: Letra \"A\"\n");
		errado++;
		printf("----------------------------------\n");
		system("pause");
		system("cls");
	}
}

void perguntasMedias()
{

	system("color 6F");
	printf("      *-------------------------------------------------*\n");
	printf("      || XXX    XX  XX  XX     XX  XXXXXXX  XX     ||              \n");
	printf("      || XX X   XX  XX  XX     XX  XX       XX     ||              \n");
	printf("      || XX  X  XX  XX   XX   XX   XXXXX    XX     ||              \n");
	printf("      || XX   X XX  XX    XX XX    XX       XX     ||              \n");
	printf("      || XX    XXX  XX     XXX     XXXXXXX  XXXXXX ||              \n");
	printf("      *-------------------------------------------------*\n");
	printf("      || XXXX   XXXX  XXXXXX  XXXXXXX    XX   XXXXX   ||           \n");
	printf("      || XX XX XX XX  XX      XX    XX   XX  XX   XX  ||           \n");
	printf("      || XX  XXX  XX  XXXXX   XX     XX  XX  XX   XX  ||           \n");
	printf("      || XX   X   XX  XX      XX    XX   XX  XX   XX  ||           \n");
	printf("      || XX       XX  XXXXXX  XXXXXXX    XX   XXXXX   ||           \n");
	printf("      *-------------------------------------------------*\n\n");
	system("pause");
	system("cls");

	// 1º questão medio
	if (errado >= 3)
	{
		printf("\n\t\tAs vidas acabaram!\n\n");
		system("pause");
		result();
		system("pause");
		exit(0);
	}
pergunta1:
	system("cls");
	system("color 6F");
	printf("\t\t*--------------------------------*\n");
	printf("\t\t|  Pergunta n 1 - Nivel Medio  |\n");
	printf("\t\t*--------------------------------*\n\n");
	printf("\t\tOs Flerkens são uma raça de alienígenas extremamente perigosos que se assemelha a quê?\n\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tA) Gatos\n");
	printf("\t\tB) Patos\n");
	printf("\t\tC) Répteis\n");
	printf("\t\tD) Guaxinins\n");
	printf("\t\tE) Dica\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tResposta ?  ");
	scanf("%s", &resposta);

	if ((resposta == 'e') || (resposta == 'E'))
	{
		if (dica < 2)
		{
			printf("\n\t\tLembra um animal domestico\n\n");
			system("pause");
			dica++;
			goto pergunta1;
		}
		else
		{
			printf("\n\t\tO direito as dicas acabaram!\n\n");
			system("pause");
			goto pergunta1;
		}
	}
	if ((resposta == 'a') || (resposta == 'A'))
	{
		printf("\t\tResposta correta\n");
		certo_2++;
	}
	else
	{
		printf("\t\tResposta errada\n");
		printf("\t\tResposta correta: Letra \"A\"\n");
		errado++;
	}

	// 2º questão medio
	if (errado >= 3)
	{
		printf("\n\t\tAs vidas acabaram!\n\n");
		system("pause");
		result();
		system("pause");
		exit(0);
	}

	printf("\t\t----------------------------------\n");
	system("pause");
pergunta2:
	system("cls");
	printf("\t\t*--------------------------------*\n");
	printf("\t\t|  Pergunta n. 2 - Nivel Medio  |\n");
	printf("\t\t*--------------------------------*\n\n");
	printf("\t\tQual é a raça alienígena que Loki envia para invadir a Terra em Os Vingadores?\n\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tA) Os skrulls\n");
	printf("\t\tB) The Kree\n");
	printf("\t\tC) Os Chitauri\n");
	printf("\t\tD) The Flerkens\n");
	printf("\t\tE) Dica\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tResposta ?  ");
	scanf("%s", &resposta);

	if ((resposta == 'e') || (resposta == 'E'))
	{
		if (dica < 2)
		{
			printf("\n\t\tE parecido com o nome MINOTAURO\n\n");
			system("pause");
			dica++;
			goto pergunta2;
		}
		else
		{
			printf("\n\t\tO direito as dicas acabaram!\n\n");
			system("pause");
			goto pergunta2;
		}
	}
	if ((resposta == 'c') || (resposta == 'C'))
	{
		printf("\t\tResposta correta\n");
		certo_2++;
	}
	else
	{
		printf("\t\tResposta errada\n");
		printf("\t\tResposta correta: Letra \"C\"\n");
		errado++;
	}

	// 3º questão medio
	if (errado >= 3)
	{
		printf("\n\t\tAs vidas acabaram!\n\n");
		system("pause");
		result();
		system("pause");
		exit(0);
	}

	printf("\t\t----------------------------------\n");
	system("pause");
pergunta3:
	system("cls");
	printf("\t\t*--------------------------------*\n");
	printf("\t\t|  Pergunta n. 3 - Nivel Medio  |\n");
	printf("\t\t*--------------------------------*\n\n");
	printf("\t\tQuem foi o último detentor do Pedra do espaço antes de Thanos reivindicá-lo por sua Manopla do Infinito?\n\n");
	printf("\t\tA) Thor\n");
	printf("\t\tB) Loki\n");
	printf("\t\tC) O Colecionador\n");
	printf("\t\tD) Tony Stark\n");
	printf("\t\tE) Dica\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tResposta ?  ");
	scanf("%s", &resposta);

	if ((resposta == 'e') || (resposta == 'E'))
	{
		if (dica < 2)
		{
			printf("\n\t\tEle e um deus no universo Marvel\n\n");
			system("pause");
			dica++;
			goto pergunta3;
		}
		else
		{
			printf("\n\t\tO direito as dicas acabaram!\n\n");
			system("pause");
			goto pergunta3;
		}
	}
	if (resposta == 'b' || resposta == 'B')
	{
		printf("\t\tResposta certa\n");
		certo_2++;
	}
	else
	{
		printf("\t\tResposta errada\n");
		printf("\t\tResposta correta: Letra \"B\"\n");
		errado++;
	}

	// 4º questão medio
	if (errado >= 3)
	{
		printf("\n\t\tAs vidas acabaram!\n\n");
		system("pause");
		result();
		system("pause");
		exit(0);
	}

	printf("\t\t----------------------------------\n");
	system("pause");
pergunta4:
	system("cls");
	printf("\t\t*--------------------------------*\n");
	printf("\t\t|  Pergunta . 4 - Nivel Medio  |\n");
	printf("\t\t*--------------------------------*\n\n");
	printf("\t\tQual nome falso que Natasha usa quando conhece Tony?\n\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tA) Natalie Rushman\n");
	printf("\t\tB) Natalia Romanoff\n");
	printf("\t\tC) Nicole Rohan\n");
	printf("\t\tD) Naya Rabe\n");
	printf("\t\tE) Dica\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tResposta ?  ");
	scanf("%s", &resposta);

	if ((resposta == 'e') || (resposta == 'E'))
	{
		if (dica < 2)
		{
			printf("\n\t\tNão é nicole e nem Naya!\n\n");
			system("pause");
			dica++;
			goto pergunta4;
		}
		else
		{
			printf("\n\t\tO direito as dicas acabaram!\n\n");
			system("pause");
			goto pergunta4;
		}
	}
	if ((resposta == 'a') || (resposta == 'A'))
	{
		printf("\t\tResposta correta\n");
		certo_2++;
	}
	else
	{
		printf("\t\tResposta errada\n");
		printf("\t\tResposta correta: Letra \"A\"\n");
		errado++;
	}

	// 5º questão medio
	if (errado >= 3)
	{
		printf("\n\t\tAs vidas acabaram!\n\n");
		system("pause");
		result();
		system("pause");
		exit(0);
	}

	printf("\t\t----------------------------------\n");
	system("pause");
pergunta5:
	system("cls");
	printf("\t\t*--------------------------------*\n");
	printf("\t\t|  Pergunta . 5 - Nivel Medio  |\n");
	printf("\t\t*--------------------------------*\n\n");
	printf("\t\tO que Thor quer quando está na lanchonete?\n\n");
	printf("\t\tA) Uma fatia de torta\n");
	printf("\t\tB) Uma caneca de cerveja\n");
	printf("\t\tC) Uma pilha de panquecas\n");
	printf("\t\tD) Um copo de café\n");
	printf("\t\tE) Dica\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tResposta ?  ");
	scanf("%s", &resposta);

	if ((resposta == 'e') || (resposta == 'E'))
	{
		if (dica < 2)
		{
			printf("\n\t\tNormalmente e tomado pela manhã\n\n");
			system("pause");
			dica++;
			goto pergunta5;
		}
		else
		{
			printf("\n\t\tO direito as dicas acabaram!\n\n");
			system("pause");
			goto pergunta5;
		}
	}
	if (resposta == 'd' || resposta == 'D')
	{
		printf("\t\tResposta certa\n");
		certo_2++;
	}
	else
	{
		printf("\t\tResposta errada\n");
		printf("\t\tResposta correta: Letra \"D\"\n");
		errado++;
	}

	// 6º questão medio
	if (errado >= 3)
	{
		printf("\n\t\tAs vidas acabaram!\n\n");
		system("pause");
		result();
		system("pause");
		exit(0);
	}

	printf("\t\t----------------------------------\n");
	system("pause");
pergunta6:
	system("cls");
	printf("\t\t*---------------------------------*\n");
	printf("\t\t|  Pergunta n. 6 - Nivel Medio   |\n");
	printf("\t\t*---------------------------------*\n\n");
	printf("\t\t Onde Peggy diz a Steve que ela quer encontrá-lo para uma dança, antes que ele mergulhe no gelo?\n\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tA) The Cotton Club\n");
	printf("\t\tB) A Stork Club\n");
	printf("\t\tC) El Marrocos\n");
	printf("\t\tD) Copacabana\n");
	printf("\t\tE) Dica\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tResposta ?  ");
	scanf("%s", &resposta);

	if ((resposta == 'e') || (resposta == 'E'))
	{
		if (dica < 2)
		{
			printf("\n\t\tNão e um bairro e nem país\n\n");
			system("pause");
			dica++;
			goto pergunta6;
		}
		else
		{
			printf("\n\t\tO direito as dicas acabaram!\n\n");
			system("pause");
			goto pergunta6;
		}
	}
	if ((resposta == 'b') || (resposta == 'B'))
	{
		printf("\t\tResposta correta\n");
		certo_2++;
	}
	else
	{
		printf("\t\tResposta errada\n");
		printf("\t\tResposta correta: Letra \"B\"\n");
		errado++;
	}

	// 7º questão medio
	if (errado >= 3)
	{
		printf("\n\t\tAs vidas acabaram!\n\n");
		system("pause");
		result();
		system("pause");
		exit(0);
	}

	printf("\t\t----------------------------------\n");
	system("pause");
pergunta7:
	system("cls");
	printf("\t\t*---------------------------------*\n");
	printf("\t\t|  Pergunta n. 7 - Nivel Medio   |\n");
	printf("\t\t*---------------------------------*\n\n");
	printf("\t\t Qual é o nome do garotinho que Tony faz amizade enquanto está preso no Homem de Ferro 3?\n\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tA) Harry\n");
	printf("\t\tB) Henry\n");
	printf("\t\tC) Harley\n");
	printf("\t\tD) Holden\n");
	printf("\t\tE) Dica\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tResposta ?  ");
	scanf("%s", &resposta);

	if ((resposta == 'e') || (resposta == 'E'))
	{
		if (dica < 2)
		{
			printf("\n\t\tPossui E e Y no nome\n\n");
			system("pause");
			dica++;
			goto pergunta7;
		}
		else
		{
			printf("\n\t\tO direito as dicas acabaram!\n\n");
			system("pause");
			goto pergunta7;
		}
	}
	if ((resposta == 'c') || (resposta == 'C'))
	{
		printf("\t\tResposta correta\n");
		certo_2++;
	}
	else
	{
		printf("\t\tResposta errada\n");
		printf("\t\tResposta correta: Letra \"C\"\n");
		errado++;
	}

	// 8º questão medio
	if (errado >= 3)
	{
		printf("\n\t\tAs vidas acabaram!\n\n");
		system("pause");
		result();
		system("pause");
		exit(0);
	}

	printf("\t\t----------------------------------\n");
	system("pause");
pergunta8:
	system("cls");
	printf("\t\t*---------------------------------*\n");
	printf("\t\t|  Pergunta n. 8  - Nivel Medio   |\n");
	printf("\t\t*---------------------------------*\n\n");
	printf("\t\t Onde Lady Sif e Volstagg mantêm a Pedra da Realidade depois que os Elfos Negros tentaram roubá-la?\n\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tA) Para o colecionador\n");
	printf("\t\tB) Dentro da espada de Sif\n");
	printf("\t\tC) Em um cofre em Asgard\n");
	printf("\t\tD) Em Vormir\n");
	printf("\t\tE) Dica\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tResposta ?  ");
	scanf("%s", &resposta);

	if ((resposta == 'e') || (resposta == 'E'))
	{
		if (dica < 2)
		{
			printf("\n\t\tApareceu no filme Vingadores: Guerra Infinita\n\n");
			system("pause");
			dica++;
			goto pergunta8;
		}
		else
		{
			printf("\n\t\tO direito as dicas acabaram!\n\n");
			system("pause");
			goto pergunta8;
		}
	}
	if ((resposta == 'a') || (resposta == 'A'))
	{
		printf("\t\tResposta correta\n");
		certo_2++;
	}
	else
	{
		printf("\t\tResposta errada\n");
		printf("\t\tResposta correta: Letra \"A\"\n");
		errado++;
	}

	// 9º questão medio
	if (errado >= 3)
	{
		printf("\n\t\tAs vidas acabaram!\n\n");
		system("pause");
		result();
		system("pause");
		exit(0);
	}

	printf("\t\t----------------------------------\n");
	system("pause");
pergunta9:
	system("cls");
	printf("\t\t*--------------------------------*\n");
	printf("\t\t|  Pergunta n. 9 - Nivel Medio  |\n");
	printf("\t\t*--------------------------------*\n\n");
	printf("\t\tO que o Soldado Invernal disse depois que Steve o reconheceu pela primeira vez?\n\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tA) Quem diabos é Bucky?\n");
	printf("\t\tB) Eu conheço você\n");
	printf("\t\tC) Ele se foi.\n");
	printf("\t\tD) O que você disse?\n");
	printf("\t\tE) Dica\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tResposta ?  ");
	scanf("%s", &resposta);

	if ((resposta == 'e') || (resposta == 'E'))
	{
		if (dica < 2)
		{
			printf("\n\t\tEle fez uma pergunta\n\n");
			system("pause");
			dica++;
			goto pergunta9;
		}
		else
		{
			printf("\n\t\tO direito as dicas acabaram!\n\n");
			system("pause");
			goto pergunta9;
		}
	}
	if ((resposta == 'a') || (resposta == 'A'))
	{
		printf("\t\tResposta correta\n");
		certo_2++;
	}
	else
	{
		printf("\t\tResposta errada\n");
		printf("\t\tResposta correta: Letra \"A\"\n");
		errado++;
	}

	// 10º questão medio
	if (errado >= 3)
	{
		printf("\n\t\tAs vidas acabaram!\n\n");
		system("pause");
		result();
		system("pause");
		exit(0);
	}

	printf("\t\t----------------------------------\n");
	system("pause");
pergunta10:
	system("cls");
	printf("\t\t*---------------------------------*\n");
	printf("\t\t|  Pergunta n. 10 - Nivel Medio   |\n");
	printf("\t\t*---------------------------------*\n\n");
	printf("\t\tQuais foram os três itens que Rocket afirma que ele precisava para escapar da prisão?\n\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tA) Um cartão de segurança, um garfo e um monitor de tornozelo\n");
	printf("\t\tB) Uma faixa de segurança, uma bateria e uma perna protética\n");
	printf("\t\tC) Um par de binóculos, um detonador e uma perna protética\n");
	printf("\t\tD) Uma faca, fios de cabo e mixtape de Peter\n");
	printf("\t\tE) Dica\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tResposta ?  ");
	scanf("%s", &resposta);

	if ((resposta == 'e') || (resposta == 'E'))
	{
		if (dica < 2)
		{
			printf("\n\t\tA policial tem, o celular tem, uma pessoa comum pode ter.\n\n");
			system("pause");
			dica++;
			goto pergunta10;
		}
		else
		{
			printf("\n\t\tO direito as dicas acabaram!\n\n");
			system("pause");
			goto pergunta10;
		}
	}
	if ((resposta == 'b') || (resposta == 'B'))
	{
		printf("\t\tResposta correta\n");
		certo_2++;
		printf("\t\t----------------------------------\n");
		getchar();
		printf("\t\tProxima pergunta pressione \"enter\" para continuar...");
		getchar();
		system("cls");
	}
	else
	{
		printf("\t\tResposta errada\n");
		printf("\t\tResposta correta: Letra \"B\"\n");
		errado++;
		printf("\t\t----------------------------------\n");
		getchar();
		printf("\t\tProxima pergunta pressione \"enter\" para continuar...");
		getchar();
		system("cls");
	}
}

void perguntasDificeis()
{

	system("color 4F");
	printf("      *---------------------------------------------*\n");
	printf("      || XXX    XX  XX  XX     XX  XXXXXXX  XX     ||              \n");
	printf("      || XX X   XX  XX  XX     XX  XX       XX     ||              \n");
	printf("      || XX  X  XX  XX   XX   XX   XXXXX    XX     ||              \n");
	printf("      || XX   X XX  XX    XX XX    XX       XX     ||              \n");
	printf("      || XX    XXX  XX     XXX     XXXXXXX  XXXXXX ||              \n");
	printf("      *-----------------------------------------------*\n");
	printf("      || XXXXXX    XX  XXXXX  XX   XXXXX  XX  XX     ||            \n");
	printf("      || XX    XX  XX  XX     XX  XX      XX  XX     ||            \n");
	printf("      || xX    XX  XX  XXXX   XX  XX      XX  XX     ||            \n");
	printf("      || xX    XX  XX  XX     XX  XX      XX  XX     ||            \n");
	printf("      || XXXXXX    XX  XX     XX   XXXXX  XX  XXXXXX ||            \n");
	printf("      *-----------------------------------------------*\n\n");
	system("pause");
	system("cls");

	// 1º questão dificil
	if (errado >= 3)
	{
		printf("\n\t\tAs vidas acabaram!\n\n");
		system("pause");
		result();
		system("pause");
		exit(0);
	}
pergunta1:
	system("cls");
	system("color 47");
	printf("\t\t*-----------------------------------*\n");
	printf("\t\t|  Pergunta n. 1 - Nivel Dificil   |\n");
	printf("\t\t*-----------------------------------*\n\n");
	printf("\t\tQue animal Darren Cross encolhe sem sucesso no Homem-Formiga?\n\n");
	printf("\t\tA) mouse\n");
	printf("\t\tB) Ovelha\n");
	printf("\t\tC) Pato\n");
	printf("\t\tD) Criceto\n");
	printf("\t\tE) Dica\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tResposta ?  ");
	scanf("%s", &resposta);

	if ((resposta == 'e') || (resposta == 'E'))
	{
		if (dica < 2)
		{
			printf("\n\t\tE um animal considerado fofo\n\n");
			system("pause");
			dica++;
			goto pergunta1;
		}
		else
		{
			printf("\n\t\tO direito as dicas acabaram!\n\n");
			system("pause");
			goto pergunta1;
		}
	}
	if (resposta == 'b' || resposta == 'B')
	{
		printf("\t\tResposta certa\n");
		certo_3++;
	}
	else
	{
		printf("\t\tResposta errada\n");
		printf("\t\tResposta correta: Letra \"B\"\n");
		errado++;
	}

	//  2º questão dificil
	if (errado >= 3)
	{
		printf("\n\t\tAs vidas acabaram!\n\n");
		system("pause");
		result();
		system("pause");
		exit(0);
	}

	printf("\t\t----------------------------------\n");
	system("pause");
pergunta2:
	system("cls");
	printf("\t\t*-----------------------------------*\n");
	printf("\t\t|  Pergunta n. 2 - Nivel Dificil   |\n");
	printf("\t\t*-----------------------------------*\n\n");
	printf("\t\tDe que ponto de vista Peter Parker resgata seus colegas de classe em Spider-Man: Homecoming?\n\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tA) Washington Monument\n");
	printf("\t\tB) Estátua da Liberdade\n");
	printf("\t\tC) Mount Rushmore\n");
	printf("\t\tD) Golden Gate Bridge\n");
	printf("\t\tE) Dica\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tResposta ?  ");
	scanf("%s", &resposta);

	if ((resposta == 'e') || (resposta == 'E'))
	{
		if (dica < 2)
		{
			printf("\n\t\tCapital dos estados unidos\n\n");
			system("pause");
			dica++;
			goto pergunta2;
		}
		else
		{
			printf("\n\t\tO direito as dicas acabaram!\n\n");
			system("pause");
			goto pergunta2;
		}
	}
	if ((resposta == 'a') || (resposta == 'A'))
	{
		printf("\t\tResposta correta\n");
		certo_3++;
	}
	else
	{
		printf("\t\tResposta errada\n");
		printf("\t\tResposta correta: Letra \"A\"\n");
		errado++;
	}

	// 3º questão dificil
	if (errado >= 3)
	{
		printf("\n\t\tAs vidas acabaram!\n\n");
		system("pause");
		result();
		system("pause");
		exit(0);
	}

	printf("\t\t----------------------------------\n");
	system("pause");
pergunta3:
	system("cls");
	printf("\t\t*-----------------------------------*\n");
	printf("\t\t|  Pergunta n. 3 - Nivel Dificil   |\n");
	printf("\t\t*-----------------------------------*\n\n");
	printf("\t\tQue música Baby Groot dança no final do primeiro Guardian of the Galaxy?\n\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tA) 'Cherry Bomb' - The Runaways\n");
	printf("\t\tB) 'Ain't No Mountain High Enough' - Marvin Gaye e Tammi Terrell\n");
	printf("\t\tC) 'I Want You Back' - The Jackson 5\n");
	printf("\t\tD) 'Hooked On A Feeling' - Voidoid\n");
	printf("\t\tE) Dica\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tResposta ?  ");
	scanf("%s", &resposta);

	if ((resposta == 'e') || (resposta == 'E'))
	{
		if (dica < 2)
		{
			printf("\n\t\tMusica que fez sucesso quando cantor era criança\n\n");
			system("pause");
			dica++;
			goto pergunta3;
		}
		else
		{
			printf("\n\t\tO direito as dicas acabaram!\n\n");
			system("pause");
			goto pergunta3;
		}
	}
	if ((resposta == 'c') || (resposta == 'C'))
	{
		printf("\t\tResposta correta\n");
		certo_3++;
	}
	else
	{
		printf("\t\tResposta errada\n");
		printf("\t\tResposta correta: Letra \"C\"\n");
		errado++;
	}

	// 4º questão dificil
	if (errado >= 3)
	{
		printf("\n\t\tAs vidas acabaram!\n\n");
		system("pause");
		result();
		system("pause");
		exit(0);
	}

	printf("\t\t----------------------------------\n");
	system("pause");
pergunta4:
	system("cls");
	printf("\t\t*-----------------------------------*\n");
	printf("\t\t|  Pergunta n. 4 - Nivel Dificil   |\n");
	printf("\t\t*-----------------------------------*\n\n");
	printf("\t\tQue tipo de médico é Stephen Strange ?\n\n");
	printf("\t\tA) Neurocirurgião\n");
	printf("\t\tB) Cirurgião cardiotorácico\n");
	printf("\t\tC) Cirurgião de trauma\n");
	printf("\t\tD) Cirurgião Plástico\n");
	printf("\t\tE) Dica\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tResposta ?  ");
	scanf("%s", &resposta);

	if ((resposta == 'e') || (resposta == 'E'))
	{
		if (dica < 2)
		{
			printf("\n\t\tEle pode mexer na sua cabeça\n\n");
			system("pause");
			dica++;
			goto pergunta4;
		}
		else
		{
			printf("\n\t\tO direito as dicas acabaram!\n\n");
			system("pause");
			goto pergunta4;
		}
	}
	if (resposta == 'a' || resposta == 'A')
	{
		printf("\t\tResposta certa\n");
		certo_3++;
	}
	else
	{
		printf("\t\tResposta errada\n");
		printf("\t\tResposta correta: Letra \"A\"\n");
		errado++;
	}

	// 5º questão dificil
	if (errado >= 3)
	{
		printf("\n\t\tAs vidas acabaram!\n\n");
		system("pause");
		result();
		system("pause");
		exit(0);
	}

	printf("\t\t----------------------------------\n");
	system("pause");
pergunta5:
	system("cls");
	printf("\t\t*-----------------------------------*\n");
	printf("\t\t|  Pergunta n. 5 - Nivel Dificil   |\n");
	printf("\t\t*-----------------------------------*\n\n");
	printf("\t\tQuem são os seres primordiais responsáveis pela criação das Pedras Infinitas?\n\n");
	printf("\t\tA) Celestiais\n");
	printf("\t\tB) Klyntar\n");
	printf("\t\tC) Kree\n");
	printf("\t\tD) Entidades Cósmicas\n");
	printf("\t\tE) Dica\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tResposta ?  ");
	scanf("%s", &resposta);

	if ((resposta == 'e') || (resposta == 'E'))
	{
		if (dica < 2)
		{
			printf("\n\t\tNão são os Klyntar ou os Kree\n\n");
			system("pause");
			dica++;
			goto pergunta5;
		}
		else
		{
			printf("\n\t\tO direito as dicas acabaram!\n\n");
			system("pause");
			goto pergunta5;
		}
	}
	if (resposta == 'd' || resposta == 'D')
	{
		printf("\t\tResposta certa\n");
		certo_3++;
	}
	else
	{
		printf("\t\tResposta errada\n");
		printf("\t\tResposta correta: Letra \"D\"\n");
		errado++;
	}

	//  6º questão dificil
	if (errado >= 3)
	{
		printf("\n\t\tAs vidas acabaram!\n\n");
		system("pause");
		result();
		system("pause");
		exit(0);
	}

	printf("\t\t----------------------------------\n");
	system("pause");
pergunta6:
	system("cls");
	printf("\t\t*-----------------------------------*\n");
	printf("\t\t|  Pergunta n. 6 - Nivel Dificil   |\n");
	printf("\t\t*-----------------------------------*\n\n");
	printf("\t\tEm qual filme The Aether apareceu pela primeira vez?\n\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tA)Homem de ferro\n");
	printf("\t\tB)O incrivel hulk\n");
	printf("\t\tC)Thor: The Dark World\n");
	printf("\t\tD)Thor: Ragnarok\n");
	printf("\t\tE) Dica\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tResposta ?  ");
	scanf("%s", &resposta);

	if ((resposta == 'e') || (resposta == 'E'))
	{
		if (dica < 2)
		{
			printf("\n\t\tE um filme do Thor\n\n");
			system("pause");
			dica++;
			goto pergunta6;
		}
		else
		{
			printf("\n\t\tO direito as dicas acabaram!\n\n");
			system("pause");
			goto pergunta6;
		}
	}
	if ((resposta == 'c') || (resposta == 'C'))
	{
		printf("\t\tResposta correta\n");
		certo_3++;
	}
	else
	{
		printf("\t\tResposta errada\n");
		printf("\t\tResposta correta: Letra \"C\"\n");
		errado++;
	}

	//  7º questão dificil
	if (errado >= 3)
	{
		printf("\n\t\tAs vidas acabaram!\n\n");
		system("pause");
		result();
		system("pause");
		exit(0);
	}

	printf("\t\t----------------------------------\n");
	system("pause");
pergunta7:
	system("cls");
	printf("\t\t*-----------------------------------*\n");
	printf("\t\t|  Pergunta n. 7 - Nivel Dificil   |\n");
	printf("\t\t*-----------------------------------*\n\n");
	printf("\t\t Que espécie Loki revelou ser?\n");
	printf("\t\t----------------------------------\n\n");
	printf("\t\tA) Gigante de Gelo\n");
	printf("\t\tB) Galadorianos\n");
	printf("\t\tC) Skrull\n");
	printf("\t\tD) Kree\n");
	printf("\t\tE) Dica\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tResposta ?  ");
	scanf("%s", &resposta);

	if ((resposta == 'e') || (resposta == 'E'))
	{
		if (dica < 2)
		{
			printf("\n\t\tComeça com G\n\n");
			system("pause");
			dica++;
			goto pergunta7;
		}
		else
		{
			printf("\n\t\tO direito as dicas acabaram!\n\n");
			system("pause");
			goto pergunta7;
		}
	}
	if ((resposta == 'a') || (resposta == 'A'))
	{
		printf("\t\tResposta correta\n");
		certo_3++;
	}
	else
	{
		printf("\t\tResposta errada\n");
		printf("\t\tResposta correta: Letra \"A\"\n");
		errado++;
	}

	//  8º questão dificil
	if (errado >= 3)
	{
		printf("\n\t\tAs vidas acabaram!\n\n");
		system("pause");
		result();
		system("pause");
		exit(0);
	}

	printf("\t\t----------------------------------\n");
	system("pause");
pergunta8:
	system("cls");
	printf("\t\t*-----------------------------------*\n");
	printf("\t\t|  Pergunta n. 8 - Nivel Dificil   |\n");
	printf("\t\t*-----------------------------------*\n\n");
	printf("\t\t Em que cena de pós-crédito o Thanos apareceu pela primeira vez?\n\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tA) Capitão America: O primeiro vingador\n");
	printf("\t\tB) Os Vingadores\n");
	printf("\t\tC) Homem de ferro\n");
	printf("\t\tD) Thor\n");
	printf("\t\tE) Dica\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tResposta ?  ");
	scanf("%s", &resposta);

	if ((resposta == 'e') || (resposta == 'E'))
	{
		if (dica < 2)
		{
			printf("\n\t\tFilme lançado em 2012\n\n");
			system("pause");
			dica++;
			goto pergunta8;
		}
		else
		{
			printf("\n\t\tO direito as dicas acabaram!\n\n");
			system("pause");
			goto pergunta8;
		}
	}
	if ((resposta == 'b') || (resposta == 'B'))
	{
		printf("\t\tResposta correta\n");
		certo_3++;
	}
	else
	{
		printf("\t\tResposta errada\n");
		printf("\t\tResposta correta: Letra \"B\"\n");
		errado++;
	}

	//  9º questão dificil
	if (errado >= 3)
	{
		printf("\n\t\tAs vidas acabaram!\n\n");
		system("pause");
		result();
		system("pause");
		exit(0);
	}

	printf("\t\t----------------------------------\n");
	system("pause");
pergunta9:
	system("cls");
	printf("\t\t*-----------------------------------*\n");
	printf("\t\t|  Pergunta n. 9 - Nivel Dificil   |\n");
	printf("\t\t*-----------------------------------*\n\n");
	printf("\t\tEm que filme finalmente aprendemos a história por trás de como Nick Fury perdeu o olho?\n\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tA) Homem-Formiga\n");
	printf("\t\tB) Capitão América: O Soldado Invernal\n");
	printf("\t\tC) Capitão Marvel\n");
	printf("\t\tD) Homem de Ferro 3\n");
	printf("\t\tE) Dica\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tResposta ?  ");
	scanf("%s", &resposta);

	if ((resposta == 'e') || (resposta == 'E'))
	{
		if (dica < 2)
		{
			printf("\n\t\tFilme lançado no mesmo ano de Vingadores: Ultimato\n\n");
			system("pause");
			dica++;
			goto pergunta9;
		}
		else
		{
			printf("\n\t\tO direito as dicas acabaram!\n\n");
			system("pause");
			goto pergunta9;
		}
	}
	if ((resposta == 'c') || (resposta == 'C'))
	{
		printf("\t\tResposta correta\n");
		certo_3++;
	}
	else
	{
		printf("\t\tResposta errada\n");
		printf("\t\tResposta correta: Letra \"C\"\n");
		errado++;
	}

	//  10º questão dificil
	if (errado >= 3)
	{
		printf("\n\t\tAs vidas acabaram!\n\n");
		system("pause");
		result();
		system("pause");
		exit(0);
	}

	printf("\t\t----------------------------------\n");
	system("pause");
pergunta10:
	system("cls");
	printf("\t\t*-----------------------------------*\n");
	printf("\t\t|  Pergunta n. 10 - Nivel Dificil   |\n");
	printf("\t\t*-----------------------------------*\n\n");
	printf("\t\t Qual planeta Peter Quill recupera o Orbe que contém a Pedra de Poder?\n\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tA) Morag\n");
	printf("\t\tB) Saakar\n");
	printf("\t\tC) Xandar\n");
	printf("\t\tD) EGO\n");
	printf("\t\tE) Dica\n");
	printf("\t\t----------------------------------\n");
	printf("\t\tResposta ?  ");
	scanf("%s", &resposta);

	if ((resposta == 'e') || (resposta == 'E'))
	{
		if (dica < 2)
		{
			printf("\n\t\tNão é EGO ou Xandar\n\n");
			system("pause");
			dica++;
			goto pergunta10;
		}
		else
		{
			printf("\n\t\tO direito as dicas acabaram!\n\n");
			system("pause");
			goto pergunta10;
		}
	}
	if ((resposta == 'a') || (resposta == 'A'))
	{
		printf("\t\tResposta correta\n");
		certo_3++;
	}
	else
	{
		printf("\t\tResposta errada\n");
		printf("\t\tResposta correta: Letra \"A\"\n");
		errado++;
	}
	system("cls");
}

void result()
{
	system("cls");
	pontostotal = (certo_1 * 150) + (certo_2 * 200) + (certo_3 * 250);
	printf("\n\n\t\tQUIZ ENCERRADO\n\t\tCONFIRA OS RESULTADOS...\n\t\t");
	printf("\n\t\tTotal de acertos: %d \n", certo_1 + certo_2 + certo_3);
	printf("\t\tTotal de erros: %d \n", errado);
	printf("\t\tPontuação: %d \n\n", pontostotal);
}
