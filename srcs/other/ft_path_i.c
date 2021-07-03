/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

int		ft_path_i(char *env, int i, int n)
{
	int j;

	j = 0;
	if (n == 1)
	{
		while (env[i] != '\0')
		{
			if (env[i] == ':')
				j++;
			i++;
		}
		return (j);
	}
	else if (n == 2)
	{
		while (env[i] != '\0' && env[i] != ':')
			i++;
		return (i);
	}
	return (0);
}
