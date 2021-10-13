#include <stdio.h>
#include <string.h>

int isValidFloat(char *s);

int main(void)
{
    char num[50];

    scanf("%s", num);

    if(isValidFloat(num))
    {
        printf("valid");
    }
    else{
        printf("invalid");
    }

    return 0;
}

int isValidFloat(char *s)
{
    int isValid = 0;
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] == '.' && s[i+1] != 0)
        {
            isValid = 1;
        }
    }
    return isValid;

}
