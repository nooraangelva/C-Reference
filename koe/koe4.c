#include <stdio.h>

int main()
{
   int i, x;
   char str[100];

    printf("Anna lause:\t");
   gets(str);

   printf("\nvalitse:\n");
   printf("1 = Salaa.\n");
   printf("2 = Pura salaus.\n");
    printf("3 = Lopeta. \n");
   scanf("%d", &x);

// koska taulukoissa kirjaimet aakkosjärjestyksessä, mutta ab perällä eli ASCII arvo +2 tai -2

   switch(x)
   {
   case 1:
      for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] + 2;

      printf("\nSalattu lause: %s\n", str);
      break;


   case 2:
      for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] - 2;

      printf("\nPurettu lause: %s\n", str);
      break;

   case 3:
       printf("Moro");
       break;

   default:
      printf("\nVirhe\n");
   }
   return 0;
}
