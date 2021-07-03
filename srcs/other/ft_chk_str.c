/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_chk_str(char **str, int i, int j)
{
	pid_t	p;
	int		fd[2];
	char	*tmp;

	tmp = NULL;
	pipe(fd);
	p = fork();
	if (p == 0)
		ft_crct_str(str, fd);
	else
	{
		waitpid(p, &j, WUNTRACED);
		dup2(fd[0], 0);
		close(fd[1]);
		free(*str);
		if (g_key != 13)
			ft_view_new_str(tmp, str, 0, 0);
		close(fd[0]);
		dup2(i, 0);
		close(i);
	}
}
