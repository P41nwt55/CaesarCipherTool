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

							Writed By P41n_wt55(Migdal_2035)

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char alphabet[27] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
const int  alphaPositions = 27;

int main(){

	char entrada[2] = "a";

	for(int i = 0; i < alphaPositions; i++){

		if(entrada == alphabet[i]); printf("letra digitada %c\n",alphabet[i]);

	}



	

return 0;
}
