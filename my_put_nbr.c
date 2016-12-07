/*
** my_putnbr.c for  in /home/benitoa/devc/jour05/benito_a
** 
** Made by BENITO Anthony
** Login   <benito_a@etna-alternance.net>
** 
** Started on  Sat Oct 22 18:22:42 2016 BENITO Anthony
** Last update Mon Nov 21 10:42:31 2016 BENITO Anthony
*/

#include <unistd.h>
#include "libmy.h"

void	my_put_nbr(int n)
{
  if (n < -2147483647)
   {
     my_putstr("-2 147 483 648");
     return ;
   }
 if (n < 0)
   {
     my_putchar('-');
     n = n * (-1);
   }
 if (n >= 10)
   {
     my_put_nbr(n / 10);
     my_put_nbr(n % 10);
   }
 else
   {
     my_putchar(n + 48);
   }
}
