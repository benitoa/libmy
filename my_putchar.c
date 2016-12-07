/*
** my_putchar.c for  in /home/benitoa/devc/libmy/benito_a/libmy_finale
** 
** Made by BENITO Anthony
** Login   <benito_a@etna-alternance.net>
** 
** Started on  Mon Nov 21 10:02:27 2016 BENITO Anthony
** Last update Mon Nov 21 10:02:30 2016 BENITO Anthony
*/
#include <unistd.h>

void my_putchar(char c)
{
write(1,&c,1);
}
