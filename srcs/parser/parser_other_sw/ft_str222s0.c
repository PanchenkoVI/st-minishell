/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

int		ft_str222s0(char *str, int *j, int i, int *k)
{
	if (*k == 1)
		*k = 0;
	else
	{
		*k = 1;
		if (str[i + 1] == '\'' && i == *j)
			return (1);
	}
	return (0);
}
