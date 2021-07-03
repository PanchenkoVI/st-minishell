/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

int		ft_quantity_echo(char *line)
{
	int i;

	i = 0;
	while (line[i] != '\0')
	{
		if (line[i] == 'e' && line[i + 1] == 'c' && \
			line[i + 2] == 'h' && line[i + 3] == 'o')
			return (1);
		i++;
	}
	return (0);
}
