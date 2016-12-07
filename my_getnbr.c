/*
** my_getnbr.c for  in /home/benitoa/devc/jour05/benito_a/my_getnbr
** 
** Made by BENITO Anthony
** Login   <benito_a@etna-alternance.net>
** 
** Started on  Mon Oct 24 13:11:37 2016 BENITO Anthony
** Last update Mon Nov 21 10:15:48 2016 BENITO Anthony
*/

#include <unistd.h>
#include "libmy.h"

int	my_getnbr(char *str)
{
  int	num;
  int	i;
  int nbmoins;

  nbmoins = 0;
  num = 0;
  i = 0;

  while ((str[i] == 45 || str[i] == 43) && str[i] != '0')
    {
      if (str[i] == 45)
	  nbmoins++;
      i++;
    }
      while ((str[i] >= 48 && str[i] <= 57) || (str[i] == 43) || (str[i] == 45))
	{
	  if ((str[i] >= 48) && str[i] <= 57)
	      num = (num + str[i] - 48) * 10;
	  i++;
	}
      if (nbmoins %2 != 0)
	  my_putchar('-');
      return (num / 10);
}
