/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

int		ft_sign_n(char n, char *line, int j)
{
	while (line[j])
	{
		if (line[j] == n)
			return (j);
		j++;
	}
	return (-1);
}
