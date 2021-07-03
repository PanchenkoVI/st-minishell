/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_relation_f(t_instruct *instrct, int flag, char **date, char **env)
{
	int		i;
	pid_t	p;

	i = 0;
	if (flag == 1)
	{
		if (instrct->name[i] == NULL && g_cdd < 0)
			ft_print_forks_err();
		else if (instrct->name[i] == NULL)
		{
			errno = 0;
			p = fork();
			ft_run_f(p, date, env, instrct);
			kill(p, SIGKILL);
		}
		else if (instrct->name[i] != NULL)
		{
			ft_red_fk(date, instrct->name[i], instrct->flag[i], 0);
			i++;
		}
	}
	else
		ft_relation_f2(flag, instrct);
}
