/*
** my_strlen.c for  in /home/benitoa/devc/jour03/benito_a
** 
** Made by BENITO Anthony
** Login   <benito_a@etna-alternance.net>
** 
** Started on  Thu Oct 20 12:40:24 2016 BENITO Anthony
** Last update Thu Oct 20 19:27:11 2016 BENITO Anthony
*/

int	 my_strlen(char *str)
{
  int i;

  i = 0;
  while ( *(str+i) != '\0')
 {
   i++;
  }
  return (i);
}
   
   
  
