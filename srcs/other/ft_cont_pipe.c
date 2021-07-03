/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_cont_pipe(int *pp, int n, int *fd, pid_t *pid)
{
	int		status;

	if (n == 1)
	{
		dup2(*pp, 0);
		close(*pp);
	}
	else if (n == 2)
	{
		close(*pp);
		close(fd[1]);
		*pp = fd[0];
	}
	else if (n == 3)
		waitpid(*pid, &status, WUNTRACED);
	else
		ft_printf_err("Error in pipe", -5);
}
