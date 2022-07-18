// Leia uma string s e imprima o número de caracteres dessa string. Não use a função strlen.
#include <stdio.h>
int main()
{
    char s[20];
    gets(s);

    int x = 0;
    while(s[x] != '\0')
        x++;
    
    printf("A string tem %d caracteres.", x);
}