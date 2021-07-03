/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_run_f(pid_t p, char **date, char **env, t_instruct *instrct)
{
	int		i;
	pid_t	wd;

	i = 0;
	if (p == 0)
		execve(date[0], date, env);
	else if (p == -1)
		ft_printf_err(instrct->instrct, errno);
	else
		wd = waitpid(p, &i, WUNTRACED);
	if (i > 0 && g_key == 7)
		g_print_err = "1";
}
