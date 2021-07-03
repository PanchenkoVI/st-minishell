/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

int		ft_sign(char n, char *line)
{
	int i;

	i = 0;
	while (line[i])
	{
		if (line[i] == n)
			return (1);
		i++;
	}
	return (0);
}
