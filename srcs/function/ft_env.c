/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_env(t_info *inf, char **env, int i)
{
	char	*tmp;

	tmp = NULL;
	while (env[i])
		i++;
	if (!(inf->cmd_env = (char **)malloc(sizeof(char *) * (i + 1))))
		ft_error("Problem in Malloc", inf);
	inf->cmd_env[0] = NULL;
	i = 0;
	while (env[i])
	{
		inf->cmd_env = ft_env2(inf, env, i, tmp);
		i++;
	}
}
