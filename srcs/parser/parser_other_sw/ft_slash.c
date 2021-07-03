/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

int		ft_slash(char *line)
{
	int i;

	i = 0;
	while (line[i])
	{
		if (line[i] == '/')
		{
			while (line[i] == '/')
				i++;
			if (line[i] == '\0')
				return (0);
		}
		i++;
	}
	return (1);
}
