/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_red(t_instruct *instrct)
{
	int		dect[2];
	pid_t	p;

	pipe(dect);
	g_key = 2;
	p = fork();
	if (p < 0)
		return ;
	else if (p == 0)
	{
		dup2(ft_file_descriptor(instrct), dect[1]);
		dup2(dect[1], 0);
		close(dect[0]);
		close(dect[1]);
		exit(1);
	}
	else
		redirection_command2(p, &dect[0], &dect[1]);
}
