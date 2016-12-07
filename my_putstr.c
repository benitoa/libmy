/*
** my_putstr.c for  in /home/benitoa/devc/jour03/benito_a/my_putstr
** 
** Made by BENITO Anthony
** Login   <benito_a@etna-alternance.net>
** 
** Started on  Thu Oct 20 11:44:05 2016 BENITO Anthony
** Last update Fri Nov 18 15:56:27 2016 BENITO Anthony
*/

#include <unistd.h>
#include "libmy.h"

void	 my_putstr (char *str)
{  
  while (*str != '\0')
    {
      my_putchar(*str);
      str++;
    }
}
