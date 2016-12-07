/*
** my_strncmp.c for  in /home/benitoa/devc/jour04/benito_a
** 
** Made by BENITO Anthony
** Login   <benito_a@etna-alternance.net>
** 
** Started on  Wed Oct 26 20:24:15 2016 BENITO Anthony
** Last update Mon Nov 21 10:19:31 2016 BENITO Anthony
*/

#include<unistd.h>
#include "libmy.h"

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;
  int	lens1;
  int	lens2;
  int	resultat;

  i = 0;
  lens1 = my_strlen(s1);
  lens2 = my_strlen(s2);
  resultat = lens1 - lens2;

 while (i < n)
   {
     if (resultat > 0)
       {
	 return (1);
       }
     else if (resultat < 0)
       {
	 return (-1);
       }
     else
	 return (0);
     i++;
   }
 return (0);
}
