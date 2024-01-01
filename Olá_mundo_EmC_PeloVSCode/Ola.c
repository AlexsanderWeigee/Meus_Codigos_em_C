#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main()
{
   int i = 1;
   system("cls");
   setlocale (LC_ALL, "");

   while (i <= 10)
   {
      printf("Aguarde... %d\n", i);
      i = i + 1;
   }
   
   printf("\nOlá mundo!");
}
