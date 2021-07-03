/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

char	**ft_word_count(char *str, int i, char ***w, int len)
{
	char	**spr;

	if (!(spr = (char **)malloc(sizeof(char *) * 1)))
	{
		ft_putstr_fd("Problem in **str (Malloc).\n", 0);
		exit(12);
	}
	spr[0] = NULL;
	if (str[0] == ' ' || str[0] == '\t')
		i = 1;
	while (str[i])
	{
		spr = ft_del_line(str, len, &i, spr);
		i = i + ft_number_of_spaces(&str[i], 0, w);
	}
	free(str);
	return (spr);
}
