/*
  _____                            _____ _       _            _______          _
 / ____|                          / ____(_)     | |          |__   __|        | |
| |     __ _  ___  ___  __ _ _ __| |     _ _ __ | |__   ___ _ __| | ___   ___ | |
| |    / _` |/ _ \/ __|/ _` | '__| |    | | '_ \| '_ \ / _ \ '__| |/ _ \ / _ \| |
| |___| (_| |  __/\__ \ (_| | |  | |____| | |_) | | | |  __/ |  | | (_) | (_) | |
 \_____\__,_|\___||___/\__,_|_|   \_____|_| .__/|_| |_|\___|_|  |_|\___/ \___/|_|
                                          | |
                                          |_|
	This tool aims to create sentences using the Caesar Cipher method
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

/*VARIAVEIS GLOBAIS QUE SERÃO USADAS
||||||||||||||||||||||||||||||||||||
VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV*/

#define TAM_ALFA 27  //tamanho do alfabeto + 1 para o laço for

char alfabeto[TAM_ALFA] = {"abcdefghijklmnopqrstuvwxyz"}; //alfabeto, base da criptografia

/* inicio da função principal */

int main(){
	char buffer[100];
	int alfa_int;
	int buffer_int;
	int chave;
	int tam_buffer;

		printf("Digite o texto:");
		gets(buffer); //armazena o texto digitado em buffer

		printf("\nDigite a chave:");
		scanf("%d",&chave); //pega a chave de criptografia

		tam_buffer = strlen(buffer); //pega o tamanha de buffer para usar no laço for

		for(int i = 0; i <= tam_buffer; i++){ //inicio do laço for pai

			for(int j = 0; j <= TAM_ALFA;j++){ //inicio do laço for filho
			buffer_int = buffer[i]; //armazena o valor int do caracter do indice 'i' dar var 'buffer'
			alfa_int = alfabeto[j];

			if(buffer_int == alfa_int) printf("%c",alfa_int + chave);


							} //fim do laço for filho


					} //fim do laço for pai

			printf("\n");

	return 0;
}
