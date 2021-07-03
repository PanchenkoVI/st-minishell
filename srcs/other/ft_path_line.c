/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

char	*ft_path_line(char **env, char *adress, int j)
{
	char	**tmp;

	tmp = NULL;
	if (env[j])
	{
		j++;
		if (env[j])
		{
			tmp = ft_path_tmp(tmp, env[j], 0, 0);
			j = 0;
			adress = ft_path_line2(tmp, adress, j);
		}
	}
	return (adress);
}
