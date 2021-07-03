/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

int		ft_what_is_it(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ';' || str[i] == '|' || str[i] == '\\')
			return (1);
		else
			i++;
	}
	return (0);
}
