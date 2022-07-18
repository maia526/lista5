// Leia uma string s e converta as letras minúsculas para maiúscula. Dica: subtraia 32 dos caracteres
// cujo código ASCII está entre 97 e 122 ('a'..'z').
#include <stdio.h>
#include <string.h>
const int MAX_LEN = 100;
int main()
{
    char s[MAX_LEN];

    printf("Digite uma string: ");
    gets(s);

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] -= 32;
        }
    }

    puts("Convertida para maiuscula: ");
    printf("%s", s);
}