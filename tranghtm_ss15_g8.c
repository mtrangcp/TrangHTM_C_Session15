#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char text[50] ;
	
	printf("Nhap chuoi: ");
	gets(text);
	
    int lenght = strlen(text);
    int countAlpha = 0, countDigit = 0;
    
    text[0] = toupper(text[0]);
    for ( int i =0; i< lenght-1 ; i++){
    	if ( isspace(text[i]) != 0 && isspace(text[i+1]) == 0 ) text[i+1] = toupper(text[i+1]);
	}
	printf("\nKet qua: %s ", text );
	
    return 0;
}

