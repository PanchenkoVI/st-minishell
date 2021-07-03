/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

void	ft_red_pipe(int file, char **date, t_info *inf, int i)
{
	pid_t	p;
	int		fd[2];

	pipe(fd);
	p = fork();
	if (p < 0)
		ft_pid(p, 1, 0, 0);
	else if (p == 0)
	{
		ft_pid(p, 2, fd, file);
		ft_work_cmd_pipe(inf, i, date);
		close(fd[1]);
		exit(0);
	}
	else
		ft_pid(p, 0, 0, 0);
	exit(0);
}
