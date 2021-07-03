/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_cdenv2(char *tmp, char **env, t_instruct *instrct, int j)
{
	if (ft_strcmp((instrct->arg[j]), "cd") == 0 && \
		(instrct->arg[j + 1] != NULL))
		ft_env_err(tmp, instrct, 1, j);
	else if (ft_strcmp((instrct->arg[j]), "cd") == 0)
		return ;
	else if (ft_strcmp((instrct->arg[j]), "pwd") == 0)
		ft_pwd(instrct);
	else if (ft_strcmp((instrct->arg[j]), "echo") == 0)
		ft_env_echo(instrct, 1);
	else if (ft_strcmp((instrct->arg[j]), "ps") == 0 || \
		ft_strcmp((instrct->arg[j]), "wc") == 0)
		ft_other(instrct, 0, env, 0);
	else
		ft_env_err(tmp, instrct, 2, j);
}
