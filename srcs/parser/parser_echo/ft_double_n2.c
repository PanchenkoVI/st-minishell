/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

int		ft_double_n2(char *str, int i, int **m)
{
	i++;
	while (str[i] == 'n')
		i++;
	if (str[i] != ' ' && str[i] != '\0' && str[i] != ';' && str[i] != '|')
		i = **m;
	return (i);
}
