/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

int		ft_tdl_test1(char *str, char ch, int i)
{
	i++;
	if (str[i] == '\0')
		return (-1);
	while (str[i] != '\0' && str[i] != ch)
	{
		if (str[i] == 'e' && str[i + 1] == 'c' && str[i + 2] == 'h' && \
			str[i + 3] == 'o' && str[i + 4] == ' ')
		{
			i += 4;
			while (str[i] == ' ' && str[i] != '\0' && \
				str[i] != ch && str[i] != '~')
				i++;
			if (str[i] == '~' || str[i] == '\0')
				return (-1);
			else if (str[i] == ch)
				return (i + 1);
		}
		i++;
	}
	return (i);
}
