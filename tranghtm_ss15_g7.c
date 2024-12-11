#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char text[50] ;
	
	printf("Nhap chuoi: ");
	gets(text);
	
    int lenght = strlen(text);
    int countAlpha = 0, countDigit = 0;
    
    for ( int i =0; i< lenght; i++){
    	if ( isalpha(text[i]) != 0 ) countAlpha++;
    	else if ( isdigit(text[i]) != 0 )  countDigit++;
	}
	printf("\nChuoi co: \n %d ki tu la chu cai  \n %d ki tu la so  \n %d ki tu dac biet ", countAlpha, countDigit, lenght-countAlpha-countDigit );
	
    return 0;
}

