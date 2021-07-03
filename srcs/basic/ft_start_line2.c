/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_start_line2(char **env, int i)
{
	while (env[i])
	{
		if (ft_strcmp(env[i], "HOME") == 0)
		{
			i++;
			g_echo_home = ft_strdup(env[i]);
			break ;
		}
		i++;
	}
}
