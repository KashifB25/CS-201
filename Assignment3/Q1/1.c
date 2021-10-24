#include <stdio.h>
#include <ctype.h>

#define N 17576

unsigned int hash(const char *word)
{
    unsigned long hash = 5381;
    int c;
    while ((c = toupper(*word++)))
    {
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    }
    return hash % N;
}

int main()
{
    char s[1000]; 

    scanf("%[^\n]s",s);
    printf("Hash value: %d", hash(s));
}
