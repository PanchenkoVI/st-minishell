/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

int		ft_only_point(char *str)
{
	int	i;

	i = 0;
	if (ft_one_or_zero(str) == 1)
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] == '.' && str[i + 1] == '/')
			i++;
		else if (str[i] == '.' && str[i + 1] == '/' && str[i + 2] == '.')
			i += 2;
		else if (str[i] == '.' && str[i + 1] == '.' && str[i + 2] == '/')
			i += 2;
		else if (str[i] == '.' && str[i + 1] == '.' && str[i + 2] == '/' &&\
			str[i + 3] == '.')
			i += 3;
		else if (str[i] == '.' && str[i + 1] == '.' && str[i + 2] == '/' &&\
			str[i + 3] == '.' && str[i + 4] == '.')
			i += 4;
		else
			i++;
	}
	return (0);
}
