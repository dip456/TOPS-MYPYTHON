//12. Write a program in C to find the number of times a given word 'is' appears in the given string. 
#include <stdio.h>
#include <string.h>

int main() {
    int ctr = 0, i, freq = 0;
    int t, h,spc; 
    char str[100]; 

    printf("\nFind the number of times the word 'is '  :\n"); 

    printf("Input the string : ");
    fgets(str, sizeof str, stdin); 
    ctr = strlen(str); 

    for (i = 0; i <= ctr - 2; i++) {
        t = (str[i] == 'i' || str[i] == 'I');
        h = (str[i + 1] == 's' || str[i + 1] == 'S');
        spc = (str[i + 2] == ' ' || str[i + 2] == '\0');

        if ((t && h && spc) == 1)
            freq++;
    }

    printf("The frequency of the word \'the\' is : %d\n\n", freq); 
	
	return 0; 
}