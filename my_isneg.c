/*
** my_isneg.c for  in /home/benitoa/devc/libmy/benito_a/libmy_02
** 
** Made by BENITO Anthony
** Login   <benito_a@etna-alternance.net>
** 
** Started on  Thu Oct 27 13:55:12 2016 BENITO Anthony
** Last update Thu Oct 27 14:15:53 2016 BENITO Anthony
*/

#include <unistd.h>

int my_isneg( int n)
{
  if (n < 0)
    {
      return (0);
    }
  else
    {
    return (1);
  }
}
