/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

int		ft_one_or_zero(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '.' && str[i] != '/')
			return (1);
		else if (str[0] != '.')
			return (1);
		else if (str[i] == '.' && str[i + 1] == '.' && str[i + 2] == '.')
			return (1);
		i++;
	}
	return (0);
}
