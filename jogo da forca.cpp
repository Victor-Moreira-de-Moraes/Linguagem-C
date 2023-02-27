#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<stdlib.h>

void imprime_cabec(void){
	printf("������������������������������\n");
	printf("         JOGO DA FORCA        \n");
	printf("������������������������������\n");
	return ;
}

void forca(int estado){
	if(estado==0){
		printf("\n");
		imprime_cabec();
		printf("\n------------");
		printf("\n|          |");
		printf("\n|");
		printf("\n|");
		printf("\n|");
		printf("\n|");
		printf("\n|");
		printf("\n-");
	} else if (estado==1){
		imprime_cabec();
		printf("\n------------");
		printf("\n|          |");
		printf("\n|          0");
		printf("\n|");
		printf("\n|");
		printf("\n|");
		printf("\n|");
		printf("\n-");
	} else if (estado==2){
		imprime_cabec();
		printf("\n------------");
		printf("\n|          |");
		printf("\n|          0");
		printf("\n|          |");
		printf("\n|");
		printf("\n|");
		printf("\n|");
		printf("\n-");
	} else if (estado==3){
		imprime_cabec();
		printf("\n------------");
		printf("\n|          |");
		printf("\n|          0");
		printf("\n|         -|");
		printf("\n|");
		printf("\n|");
		printf("\n|");
		printf("\n-");
	} else if (estado==4){
		imprime_cabec();
		printf("\n------------");
		printf("\n|          |");
		printf("\n|          0");
		printf("\n|         -|-");
		printf("\n|");
		printf("\n|");
		printf("\n|");
		printf("\n-");
    } else if (estado==5){
    	imprime_cabec();
		printf("\n------------");
		printf("\n|          |");
		printf("\n|          0");
		printf("\n|         -|-");
		printf("\n|         /");
		printf("\n|");
		printf("\n|");
		printf("\n-");
	} else if (estado==6){
		imprime_cabec();
		printf("\n------------");
		printf("\n|          |");
		printf("\n|          0");
		printf("\n|         -|-");
		printf("\n|         / \\ ");
		printf("\n|");
		printf("\n|    Perdeu o game!");
		printf("\n-");
		printf("    _______________         \n");
		printf("   /               \\       \n"); 
		printf("  /                 \\      \n");
		printf("//                   \\/\\  \n");
		printf("\\|   XXXX     XXXX   | /   \n");
		printf(" |   XXXX     XXXX   |/     \n");
		printf(" |   XXX       XXX   |      \n");
		printf(" |                   |      \n");
		printf(" \\__      XXX      __/     \n");
		printf("   |\\     XXX     /|       \n");
		printf("   | |           | |        \n");
		printf("   | I I I I I I I |        \n");
		printf("   |  I I I I I I  |        \n");
		printf("   \\_             _/       \n");
		printf("     \\_         _/         \n");
		printf("       \\_______/           \n");
		printf(" Geraldo era um criminoso!  \n");
		printf("  Fez bem em matar esse safado :) \n");
	}
		
}

	int main(void) 
	{
		setlocale (LC_ALL,"portugu�s");
		
		char menu;
		
		printf("\n\t������������������������������ͻ");
		printf("\n\t�                              �");
		printf("\n\t�        JOGO DA FORCA         �");
		printf("\n\t�                              �");
		printf("\n\t������������������������������͹");
		printf("\n\t�                              �");
		printf("\n\t�   [1] - INICIAR JOGO         �");
		printf("\n\t�   [2] - SOBRE                �");
		printf("\n\t�   [3] - AJUDA                �");
		printf("\n\t�   [4] - SAIR                 �");
		printf("\n\t�                              �");
		printf("\n\t������������������������������ͼ");
		printf("\nDigite o numero de uma das opcoes:\n");
	
		scanf("%d",&menu);
		
		switch (menu){
		
		case 1:
			
		system("cls");
		
		char p_sec[100];//palavra secreta
		printf("JOGADOR 1: \n\n");
		printf("Palavra secreta: \n");
		//fgets(p_sec,100,stdin);
		scanf("%s",p_sec);
		printf("A palavra tem %lu caracteres \n", strlen(p_sec));

		char dica[201];//dica
		printf("Digite uma dica: \n");
		scanf("%s",dica);

		for(int i=0;i<30;i++){
			printf("\n");
	}

	
	//retira o �ltimo caracter de p_sec que est� a mais devido a captura ser com f_gets()
	//	p_sec[strlen(p_sec)-1]='\0';
	
		char p_tela[100];//palavra para tela
		strcpy(p_tela, p_sec);//copia de p_sec
		
		//substitui letras por '_'
		for(int i=0;i<strlen(p_tela);i++){
			p_tela[i]='_';
		}
	
		puts(p_tela);
		
		printf("%s",p_tela);
		
		int erros = 0;
		while(1){
		//imprimir a forca
		forca(erros);
		printf("\n Dica: %s \n",dica);
		//imprimir os underline/underscores'_'para cada letra da palavra secreta, ou seja, imprimir p_tela
		printf(" Adivinhe: ");
		for(int i=0;i<strlen(p_tela);i++){
			printf("%c ", p_tela[i]);
		}
		//recebe a letra
		printf("\n Letra: ");
		char letra;
		scanf(" %c", &letra);//O espa�o antes do % � por conta do repl.it usado via web...
		//se letra correta atualiza palavra na tela
		//verifica se a letra est� correta
		int sera_que_errou=1;//1=sim 0=n�o
		for(int i=0;i<strlen(p_tela); i++){
			if(letra==p_sec[i]){//certo
				p_tela[i]=letra;
				sera_que_errou=0;
			}	
		}
		//se n�o, incrementa erros
		if(sera_que_errou==1){
			erros++;
		}
		//verifica se o jogo acabou
		//verifica se ganhou
		//verifica se p_sec � igual a p_tela
		if(strcmp(p_tela,p_sec)==0){
			//Ent�o ganhou
			printf("\n Acertou: ");
		for(int i=0;i<strlen(p_tela);i++){
			printf("%c ", p_tela[i]);
		}
			printf("\nParabens, voce ganhou! :(\n\n");

			printf("       ___________      \n");
			printf("      '._==_==_=_.'     \n");
			printf("      .-\\:      /-.    \n");
			printf("     | (|:.     |) |    \n");
			printf("      '-|:.     |-'     \n");
			printf("        \\::.    /      \n");
			printf("         '::. .'        \n");
			printf("           ) (          \n");
			printf("         _.' '._        \n");
			printf("        '-------'       \n\n");
			break;
			break;
		}
		//verifica se perdeu
		if(erros==6){
			//perdeu
			forca(erros);
			break;
		}
		
	}
	system ("pause");
	break;
	
	
}//fim do bloco switch
}
