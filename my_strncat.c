/*
** my_strncat.c for  in /home/benitoa/devc/jour04/benito_a
** 
** Made by BENITO Anthony
** Login   <benito_a@etna-alternance.net>
** 
** Started on  Wed Oct 26 21:21:10 2016 BENITO Anthony
** Last update Mon Nov 21 10:14:07 2016 BENITO Anthony
*/

#include <unistd.h>
#include "libmy.h"

char	*my_strncat(char *dest, char *src, int n)
{
  int	 i;
  int	lendest;

  i = 0;
  lendest = my_strlen(dest);

  while (src[i] < n)
    {
      dest[lendest + i] = src[i];
      i++;
	}
  return (dest);
}
