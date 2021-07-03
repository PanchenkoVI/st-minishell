/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

int		ft_quantity(char n, char *line, int i)
{
	int j;

	j = 0;
	while (line[i])
	{
		if (line[i] == n)
			j++;
		i++;
	}
	return (j);
}
