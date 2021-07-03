/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

char	*ft_env_c2(char *line, char **env, char *tmp, int i)
{
	while (env[i])
	{
		if (i == 0)
			tmp = ft_strdup(env[i]);
		else
			tmp = ft_union_str(line, env[i]);
		line = ft_union_str(tmp, "=");
		free(tmp);
		i++;
		tmp = ft_union_str(line, env[i]);
		free(line);
		i++;
		line = ft_union_str(tmp, "\n");
		free(tmp);
	}
	return (line);
}
