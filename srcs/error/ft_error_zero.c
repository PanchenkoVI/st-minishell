/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

int		ft_error_zero(char *str, int i)
{
	while (str[++i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\t')
			return (0);
	}
	return (1);
}
