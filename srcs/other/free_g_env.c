/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

int		free_g_env(void)
{
	int		i;

	i = 0;
	while (g_env[i])
	{
		free(g_env[i]);
		i++;
	}
	free(g_env);
	g_env = NULL;
	return (0);
}
