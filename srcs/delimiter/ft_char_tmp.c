/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

char	**ft_char_tmp(char **tmp, char **date, int i)
{
	i = 0;
	if (!date)
		return (NULL);
	while (date[i])
		i++;
	i += 2;
	if (!(tmp = (char **)malloc(sizeof(char *) * i)))
	{
		ft_putstr_fd("Problem in **str (Malloc).\n", 0);
		exit(12);
	}
	i = 0;
	while (date[i])
	{
		tmp[i] = ft_strdup(date[i]);
		i++;
	}
	tmp[i] = ft_strdup(date[i]);
	i++;
	tmp[i] = NULL;
	return (tmp);
}
