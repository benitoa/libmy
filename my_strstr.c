/*
** my_strstr.c for  in /home/benitoa/devc/libmy/benito_a/libmy_finale
** 
** Made by BENITO Anthony
** Login   <benito_a@etna-alternance.net>
** 
** Started on  Mon Nov 21 00:05:50 2016 BENITO Anthony
** Last update Mon Nov 21 10:47:11 2016 BENITO Anthony
*/
#include <unistd.h>
#include "libmy.h"

char	*my_strstr(char *str, char *to_find)
{
int	i;
int	j;
i = 0;
j = 0;
while (str[i])
   {
     if(j == (my_strlen(to_find) -1))
       return (str + i -j);
     if(str[i] == to_find[j])
       j = j + 1;
     i = i + 1;
   }
 return (str);
}
