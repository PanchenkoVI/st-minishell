/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

int		ft_cout_j(char *line, int i, int *l)
{
	int j;

	j = i + 1;
	while (line[j])
	{
		if (line[j] == line[i])
		{
			*l = j;
			break ;
		}
		else
			j++;
	}
	return (j);
}
