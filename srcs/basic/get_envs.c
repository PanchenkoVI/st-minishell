/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

char	**get_envs(char **env, int i, int j)
{
	char	**line;

	while (env[j])
		j++;
	if (!(line = (char **)ft_calloc(sizeof(char *), j + 1)))
		return (NULL);
	j = 0;
	while (env[i])
	{
		line[j] = ft_strdup("");
		line[j] = ft_strjoin_free(line[j], env[i]);
		i++;
		line[j] = ft_strjoin_free(line[j], "=");
		line[j] = ft_strjoin_free(line[j], env[i]);
		i++;
		j++;
	}
	return (line);
}
