/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

void	ft_cdenv(t_instruct *instrct, int j, char **env)
{
	char	*line;
	char	*tmp;

	line = NULL;
	tmp = NULL;
	while (ft_strcmp((instrct->arg[j]), "env") == 0)
		j++;
	if ((instrct->arg[j]) != NULL)
	{
		if (ft_strcmp((instrct->arg[j]), "ls") == 0)
			ft_other(instrct, 0, env, 0);
		else
			ft_cdenv2(tmp, env, instrct, j);
		return ;
	}
	else
		line = ft_env_c2(line, env, tmp, 0);
	errno = 0;
	ft_save_info(instrct, 0, line);
	g_print_err = "0";
}
