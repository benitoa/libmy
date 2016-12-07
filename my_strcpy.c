/*
** my_strcpy.c for  in /home/benitoa/devc/jour04/benito_a/my_strcpy
** 
** Made by BENITO Anthony
** Login   <benito_a@etna-alternance.net>
** 
** Started on  Fri Oct 21 17:45:28 2016 BENITO Anthony
** Last update Fri Oct 21 18:48:56 2016 BENITO Anthony
*/
#include <unistd.h>

char	*my_strcpy(char *dest, char *src)
{
  int i;

  i=0;

  while (src[i] != 0)
    {
      dest[i] = src[i];
      i++;
    }
  if (src[i] == 0)
    {
    dest[i] = 0;
    }
  return(dest);
}
