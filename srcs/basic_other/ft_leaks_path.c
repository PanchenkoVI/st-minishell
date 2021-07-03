/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

int	ft_leaks_path(char ***tmp, int j, char *env, int i)
{
	j = ft_path_i(env, i, 1);
	if (!(*tmp = (char **)malloc(sizeof(char *) * (j + 1))))
		return (-1);
	j = 0;
	return (j);
}
