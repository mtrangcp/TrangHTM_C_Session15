#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char text[] = "hanmin chan haluu";
	int len = strlen(text), count, k = 0 , check = 0;
	int sodem[50] = {0};
	char kitu[50];
	
	for ( int i = 0; i< len ; i++){
		check= 0;
		for ( int j = 0; j<k; j++){
			if ( kitu[j] == text[i] ){
				sodem[j]++;
				check= 1;
				break;
			}
		}
		if ( check == 0 && isspace(text[i]) == 0 ){
			kitu[k] = text[i];
			sodem[k] = 1;
			k++;
		}
	}
	
	for ( int i = 0; i< strlen(kitu) ; i++){
		printf("\nki tu %c : %d\n", kitu[i], sodem[i]);
	}
	
	return 0;
}
