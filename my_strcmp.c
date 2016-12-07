/*
** my_strcmp.c for  in /home/benitoa/devc/jour04/benito_a
** 
** Made by BENITO Anthony
** Login   <benito_a@etna-alternance.net>
** 
** Started on  Wed Oct 26 19:51:54 2016 BENITO Anthony
** Last update Mon Nov 21 10:17:26 2016 BENITO Anthony
*/

#include<unistd.h>
#include "libmy.h"

int	my_strcmp(char *s1, char *s2)
{
  int lens1;
  int lens2;
  int resultat;

  lens1 = my_strlen(s1);
  lens2 = my_strlen(s2);
  resultat = lens1 - lens2;

  if (resultat > 0)
    {
      return (1);
    }
  else if (resultat < 0)
    {
      return (-1);
    }
  else
    {
	return (0);
      }
}
