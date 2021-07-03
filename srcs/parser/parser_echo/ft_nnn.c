/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

int		ft_nnn(char *str, int i)
{
	while (str[i] != '\0')
	{
		if (str[i] == 'e' && str[i + 1] == 'c' && str[i + 2] == 'h' && \
			str[i + 3] == 'o' && str[i + 4] == ' ')
		{
			i += 4;
			while (str[i] == ' ')
				i++;
			if (str[i] == '\0')
				break ;
			if (str[i] == '-' && str[i + 1] == 'n')
				return (1);
		}
		i++;
	}
	return (0);
}
