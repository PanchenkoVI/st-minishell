/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

int		ft_one_or_two_err2(char *str, int i)
{
	if (str[i + 1] == '\0')
		return (3);
	i++;
	while (str[i] != '\0')
	{
		if (str[i] != ';' && str[i] != '|' && str[i] != ' ')
			return (-1);
		else if (str[i] == ';')
			break ;
		else if (str[i + 1] == '\0')
			return (3);
		i++;
	}
	return (i);
}
