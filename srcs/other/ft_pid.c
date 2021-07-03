/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_pid(pid_t p, int n, int *dect, int file)
{
	int i;

	if (n == 1)
	{
		ft_printf_err("Error", errno);
		exit(1);
	}
	else if (n == 2)
	{
		dup2(file, dect[1]);
		dup2(dect[1], 1);
		close(dect[0]);
	}
	else
		waitpid(p, &i, WUNTRACED);
}
