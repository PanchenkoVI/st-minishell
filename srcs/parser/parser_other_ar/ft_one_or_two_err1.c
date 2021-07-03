/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

int		ft_one_or_two_err1(char *str, int i)
{
	i++;
	while (str[i] != '\0')
	{
		if (str[i] != ';' && str[i] != '|' && str[i] != ' ')
			return (-1);
		else if (str[i] == '|')
			return (i);
		else if (str[i] == ';')
			return (1);
		i++;
	}
	return (i);
}
