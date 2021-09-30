#include <stdio.h>
#include <string.h>

#define N 5000
 
int addStrElements(char *first, char *second, char *answer); //Add two strings by element

int main(void)
{
  char num1[N];
  char num2[N];
  char result[N];

  for (int i = 0; i < N; i++)
  {
    num1[i] = num2[i] = result[i] = '0';
  }
  num2[N - 1] = '1';

  int n;
  scanf("%d", &n);

  if (n == 0 || n == 1)
  {
    printf("%c", n + '0');
  }
  else
  {
    // To calculate the nth Fibonacci number
    for (int i = 2; i <= n; i++)
    {
      addStrElements(num1, num2, result);
      strcpy(num1, num2);
      strcpy(num2, result);
    }

    //To print the  number
    int count = 0;
    for (int i = 0; i < N; i++)
    {
      if (count > 0)
      {
        printf("%c", result[i]);
      }
      else if (result[i] != '0')
      {
        count++;
        printf("%c", result[i]);
      }
    }
    printf("\n");
  }
  return 0;
}

int addStrElements(char *first, char *second, char *answer)
{
  int carry = 0;
  for (int i = N - 1; i >= 0; i--)
  {
    int sum = (first[i] - '0') + (second[i] - '0') + carry;
    answer[i] = (sum % 10) + '0';
    carry = sum / 10;
  }
}
