/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_env_err(char *tmp, t_instruct *instrct, int n, int j)
{
	if (n == 1)
	{
		tmp = ft_strdup("/usr/bin/cd: line 4: cd: ");
		tmp = ft_strjoin_free(tmp, instrct->arg[j]);
		tmp = ft_strjoin_free(tmp, ": No such file or directory\n");
		ft_putstr(tmp);
		free(tmp);
		g_print_err = "1";
	}
	else if (n == 2)
	{
		tmp = ft_strdup("env: ");
		tmp = ft_strjoin_free(tmp, instrct->arg[j]);
		tmp = ft_strjoin_free(tmp, ": No such file or directory\n");
		ft_putstr(tmp);
		free(tmp);
		g_print_err = "127";
	}
}
