/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

int		ft_quantity_pwd(char *line)
{
	int i;

	i = 0;
	while (line[i] != '\0')
	{
		if (line[i] == 'p' && line[i + 1] == 'w' && \
			line[i + 2] == 'd' && line[i + 3] != '\0')
			return (i);
		i++;
	}
	return (0);
}
