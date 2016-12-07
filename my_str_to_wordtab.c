#include <stdio.h>
#include <stdlib.h>
#include "libmy.h"

int	count_words(char *str)
{
  int	i;
  int	nb_words;

  i = 0;
  nb_words = 0;
  while (str[i])
    {
      if (str[i] == ' ')
	nb_words = nb_words + 1;
      i = i + 1;
    }
  nb_words = nb_words + 1;
  return (nb_words);
}

void	size_word(char *str, int *start, int *end)
{
  while (str[*end] == ' ')
    {
          *end  = *end + 1;
  *start = *end;
    }
  while (str[*end] && str[*end] != ' ')
    {
    *end = *end + 1;
    }
}

void	copy_word(char *str, char *dest, int start, int end)
{
  int	i;
  int	j;

  i = start;
  j = 0;
  while (i < end)
    {
      dest[j] = str[i];
      i = i + 1;
      j = j + 1;
    }
  dest[j] = '\0';
}  
char	**my_str_to_wordtab(char *str)
{
  char	**tab;
  int	nb_words;
  int	start;
  int	end;
  int	i;

  i = 0;
  start = 0;
  end = 0;
  nb_words = count_words(str);
  my_put_nbr(nb_words);
  my_putchar('\n');
  if ((tab = malloc((nb_words + 1) * sizeof(char*))) == NULL)
    return (NULL);
  while (i < nb_words)
    {
      size_word(str, &start, &end);
      my_put_nbr(start);
      my_putchar('-');
      my_put_nbr (end);
      my_putchar('=');
      my_put_nbr((end - start));
      my_putchar('\n');
      if ((tab[i] = malloc((end - start + 1) * sizeof(char))) == NULL)
	return (NULL);
      copy_word(str, tab[i], start, end);
      i = i + 1;
    }
  tab[i] = NULL;
  return (tab);
}
