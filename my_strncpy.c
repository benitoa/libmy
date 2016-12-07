/*
** my_strncpy.c for  in /home/benitoa/devc/libmy/benito_a/libmy_finale
** 
** Made by BENITO Anthony
** Login   <benito_a@etna-alternance.net>
** 
** Started on  Mon Nov 21 10:53:42 2016 BENITO Anthony
** Last update Mon Nov 21 11:13:18 2016 BENITO Anthony
*/

#include <unistd.h>
#include "libmy.h"

char	*my_strncpy(char *dest, char *src, int n)
{
  int i;

  i = 0;
  while((src[i] != 0) && (i <= n))
    {
      dest[i] = src[i];
      i = i + 1;
      dest[n] = 0;
    }
  return(dest);
}
