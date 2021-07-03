/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

int		ft_only_slash(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '/')
			return (1);
		else if (str[i] == '/' && str[i + 1] == '.' && str[i + 2] == '\0')
			return (0);
		else if (str[i] == '/' && str[i + 1] == '.' && str[i + 2] == '.' && \
			str[i + 3] == '\0')
			return (0);
		else if (str[i] == '/')
			i++;
		else
			i++;
	}
	return (0);
}
