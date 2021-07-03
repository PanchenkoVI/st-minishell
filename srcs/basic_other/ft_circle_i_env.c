/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

int		ft_circle_i_env(char **env, char *tmp, int i, int n)
{
	if (n == 1)
	{
		while (tmp[i])
		{
			if (tmp[0] == '?')
				return (1);
			if (ft_isdigit(tmp[i]))
				i++;
			else if (ft_isalpha(tmp[i]))
				i++;
			else if (!(ft_isdigit(tmp[i])) && !(ft_isalpha(tmp[i])))
				break ;
		}
	}
	else if (n == 2)
	{
		while (env[++i])
		{
			if (ft_strcmp(env[i], tmp) == 0)
				break ;
			i++;
		}
	}
	return (i);
}
