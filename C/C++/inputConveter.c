#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <string.h>

/* FUNCTION DECLARATIONS*/
// string convertToString(char *value, int size);
char *createCodePartten(char *ussdCode, char strBuffer[], char prefix[], char postfix[]);
int isValidCode(char *ussdCode, char *uCode);

int main()
{
  printf("Hello Converter! \n");

  // value from user input
  int value;
  // store created pattern
  char ussdCode[8];
  char prefix[] = "*#";
  char postFix[] = "#";
  char uTest[] = "*#1778#";

  // stores converted number to character string
  char buffer[10];

  // char *inStr = itoa(a, buffer, 10);
  // ask user to enter pin number
  printf("Enter ussd pin: \n");
  scanf("%d", &value);

  // convert number to character string
  itoa(value, buffer, 10);
  printf(" \n prefix:  %s", prefix);
  printf(" \n Postfix:  %s", postFix);
  printf(" \n Buffer:  %s", buffer);

  // generate valid  pattern for ussdCode
  char *ussdCodee = createCodePartten(ussdCode, buffer, prefix, postFix);

  printf(" \n ussdCode:  %s", ussdCodee);
  printf("\n Testing code... \n");

  // check if code is Valid ussdCode
  if (isValidCode(ussdCode, uTest) == 0)
  {
    printf("True, match Found! %d:", strcmp(ussdCodee, uTest));
  }
  else
  {
    printf("False!: %s", ussdCodee);
  }
  // free(ussdCode);
  return 0;
}
// Generate ussdCode pattern function
char *createCodePartten(char *ussdCode, char strBuffer[], char prefix[], char postfix[])
{
  strcpy(ussdCode, prefix);
  strcat(ussdCode, strBuffer);
  strcat(ussdCode, postfix);
  printf(" \n ussdCode in func:  %s", ussdCode);

  return ussdCode;
};

// Check ussdCode validation function
int isValidCode(char *ussdCode, char *uCode)
{
  return (strcmp(ussdCode, uCode));
};

// string convertToString(char *value, int size)
// {
//   int i;
//   string str;
//   for (i = 0; i < size; i++)
//   {
//     str += value[i];
//   }
//   return str;
// };
