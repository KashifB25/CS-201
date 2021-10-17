#include <stdio.h>
#include <string.h>
#include <ctype.h>


int isValidEmail(char *s);

int main(void)
{
    char email[50];
    scanf("%s", email);
  
    if(isValidEmail(email))
    {
        printf("valid");
    }
    else
    {
        printf("invalid");
    }
  
    return 0;

}

int isValidEmail(char *s)
{
    if(!isalpha(s[0]))
    {
        return 0;
    }

    int atPosition = -1;
    int dotPosition = -1;

    for (int i = 0, n =strlen(s); i < n; i++)
    {
        if(s[i] == '@')
        {
            atPosition = i;
        }
        else if(s[i] == '.')
        {
            dotPosition = i;
        }
    }

    if (atPosition == -1 || dotPosition == -1)
    {
        return 0;
    }

    if(atPosition > dotPosition)
    {
        return 0;
    }

    return !(dotPosition >= (strlen(s) - 1));
}
