/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

int		ft_one_or_two_err0(char *str, int i, int *n)
{
	if (str[i] != ';' && str[i] != '|' && str[i] != ' ')
		*n = 1;
	if (str[i] == ';' && str[i + 1] != ';' && *n == 0)
		return (-1);
	else if (str[i] == ';' && str[i + 1] == ';')
		return (-2);
	else if (str[i] == '|' && str[i + 1] != '|' && *n == 0)
		return (-3);
	return (i);
}
