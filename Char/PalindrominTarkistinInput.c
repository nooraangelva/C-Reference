#include <stdio.h>

int main()
{

  char merkit1[100], merkit2[100];
  int c = 0, d = 0, x = 0;

  printf("kirjoita teksti\n");
  gets(merkit1);

  while (merkit1[c] != '\0')
  {

    if (!(merkit1[c] == ' ' && merkit1[c+1] == ' ')) {

      merkit2[d] = merkit1[c];
      d++;

    }

    c++;

  }

  merkit2[d] = '\0';

  strlwr(merkit2);

  int l = 0;
  int h = strlen(merkit2) - 1;

  while (h > l)
  {
  
    if (merkit2[l++] != merkit2[h--]) {

      printf("%s ei ole Palindromi", merkit1);

      return;

    }

  }

  printf("%s on palindromi", merkit1);
  
  return 0;

}

