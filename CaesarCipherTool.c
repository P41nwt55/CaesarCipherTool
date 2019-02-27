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
#define CHAVE 3
#define TAM_ALFA 27  //tamanho do alfabeto + 1 para o laço for

char alfabeto[TAM_ALFA] = {"abcdefghijklmnopqrstuvwxyz"}; //alfabeto, base da criptografia

/* inicio da função principal */

int main(){
	char buffer[20] = {"eder"};
	int alfa_int[TAM_ALFA];

		printf("Digite o texto:");
						//pega a string digitada pelo usuário e armazena na variavel buffer
	int tam_buffer = strlen(buffer);
	int buffer_int[tam_buffer];

		for(int i = 0; i <= tam_buffer; i++){ //inicio do laço for pai

			for(int j = 0; j <= TAM_ALFA;j++){ //inicio do laço for filho
			buffer_int[i] = buffer[i]; //armazena o valor int do caracter do indice 'i' dar var 'buffer'
			alfa_int[j] = alfabeto[j];

			if(buffer_int[i] == alfa_int[j]) printf("%c",alfa_int[j+CHAVE]);


							} //fim do laço for filho


					} //fim do laço for pai

			printf("\n");

	return 0;
}
