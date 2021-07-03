/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

int		ft_tdl_test2(char *str, char ch, int i, char n)
{
	if (str[i] == '\0' || str[i + 1] == '\0')
		return (-1);
	i++;
	while (str[i] != '\0' && str[i] != ch)
	{
		if (str[i] == 'c' && str[i + 1] == 'd' && str[i + 2] == ' ')
		{
			i += 2;
			while (str[i] == ' ' && str[i] != '\0' &&\
				str[i] != ch && str[i] != n)
				i++;
			if (str[i] == n || str[i] == '\0')
				return (-1);
			else if (str[i] == ch)
				return (i + 1);
		}
		i++;
	}
	return (i);
}
