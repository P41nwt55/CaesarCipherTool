/*
  _____                            _____ _       _            _______          _
 / ____|                          / ____(_)     | |          |__   __|        | |
| |     __ _  ___  ___  __ _ _ __| |     _ _ __ | |__   ___ _ __| | ___   ___ | |
| |    / _` |/ _ \/ __|/ _` | '__| |    | | '_ \| '_ \ / _ \ '__| |/ _ \ / _ \| |
| |___| (_| |  __/\__ \ (_| | |  | |____| | |_) | | | |  __/ |  | | (_) | (_) | |
 \_____\__,_|\___||___/\__,_|_|   \_____|_| .__/|_| |_|\___|_|  |_|\___/ \___/|_|
                                          | |
                                          |_|
	Funcionalidades:
				_______*_______

	Comments:

	- No special characters, punctuation, and whitespace are allowed
				_______*_______

				Writed By P41n_wt55

		GitHub: https://github.com/P41nwt55/CaesarCipherTool

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h> // para getopt()

/*VARIAVEIS GLOBAIS QUE SERÃO USADAS
||||||||||||||||||||||||||||||||||||
VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV*/

#define TAM_ALFA 53  //tamanho do alfabeto + 1 para o laço for

char alfabeto[TAM_ALFA] = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz"; //alfabeto, base da criptografia

// declarando funções
void cifra(char buffer[100],char chave[26]);// declarando função que cifra a mensagem
void decifra(char buffer[100],char chave[26]);//declaranda a função que decifra a mensagem
void bruteForce(char buffer[100]);
void help(void);

/* inicio da função principal */

int main(int argc, char **argv){

int opcao;
while((opcao = getopt(argc ,argv, "h:c:d:b")) > 0){

	switch (opcao)
	{
		case 'h':
			help();
			break;
		case 'c':
			cifra(argv[2],argv[3]);
			break;
		case 'd':
			decifra(argv[2],argv[3]);
			break;
		case 'b':
			bruteForce(argv[2]);
			break;
		default:
			break;
	}

}
			printf("\n");

	return 0;
}

void cifra(char buffer[100],char chave[26]){


	int key = atoi(chave);
	int buffer_int, alfa_int;
	int tam_buffer = strlen(buffer); //pega o tamanha de buffer para usar no laço for

	printf("Cifragem: ");

		for(int i = 0; i <= tam_buffer; i++){ //inicio do laço for pai

			for(int j = 0; j <= 25;j++){ //inicio do laço for filho
			buffer_int = buffer[i]; //armazena o valor int do caracter do indice 'i' dar var 'buffer'
			alfa_int = alfabeto[j];
			
			if(buffer_int == alfa_int) printf("%c",alfabeto[j+key]);


							} //fim do laço for filho


					} //fim do laço for pai
}

void decifra(char buffer[100],char chave[26]){


	int key = atoi(chave);
	int buffer_int, alfa_int;
	int tam_buffer = strlen(buffer); //pega o tamanha de buffer para usar no laço for

	printf("Decifragem: ");

		for(int i = 0; i <= tam_buffer; i++){ //inicio do laço for pai

			for(int j = 26; j <= 51;j++){ //inicio do laço for filho
			buffer_int = buffer[i]; //armazena o valor int do caracter do indice 'i' dar var 'buffer'
			alfa_int = alfabeto[j];
			
			if(buffer_int == alfa_int) printf("%c",alfabeto[j-key]);


							} //fim do laço for filho


					} //fim do laço for pai
}

void bruteForce(char buffer[50]){

int buffer_int, alfa_int;
	int tam_buffer = strlen(buffer); //pega o tamanha de buffer para usar no laço for

	for(int key = 1; key <= 26;key++) // aqui key é o indice de for e tambem a chave para ser testada 
	{

		printf("\n Chave %d: palavra: ", key);

		for(int i = 0; i <= tam_buffer; i++)
		{ //inicio do laço for pai

			for(int j = 26; j <= 51;j++)
			{ //inicio do laço for filho
				buffer_int = buffer[i]; //armazena o valor int do caracter do indice 'i' dar var 'buffer'
				alfa_int = alfabeto[j];
			
				if(buffer_int == alfa_int) printf("%c",alfabeto[j-key]);
			}
		}
	}
}


void help(void){

	printf("USO: ./CCT -[opcao] (palavra) (chave)...\n\n");
	printf("-c 	cifra a palavra apos -c\n");
	printf("-d 	decifra a palavra apos -d\n");
	printf("-b 	testa as 26 chaves para a palavra apos -b(caso nao saiba a chave\n");
	printf("-h	exibe esta ajuda\n");
	printf("exemplo: ./CCT -c eder 3\n");
}
