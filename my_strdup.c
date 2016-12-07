/*
** my_strdup.c for  in /home/benitoa/devc/jour07/my_strdup
** 
** Made by BENITO Anthony
** Login   <benito_a@etna-alternance.net>
** 
** Started on  Tue Oct 25 17:59:58 2016 BENITO Anthony
** Last update Mon Nov 21 10:24:26 2016 BENITO Anthony
*/
#include <stdlib.h>
#include "libmy.h"

char			*my_strdup(char *str)
{
  int			i;
  char			*copy;

  i = 0;
  copy = NULL;
  if ((copy = malloc((my_strlen(str) + 1) * sizeof(char))) == NULL)
    return (NULL);
  while (str[i] != '\0')
    {
      copy[i] = str[i];
      i++;
    }
  copy[i] = '\0';
  return (copy);
}
