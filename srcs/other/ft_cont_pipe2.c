/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_cont_pipe2(int *fd1, t_info *inf, int i)
{
	int		l;
	int		j;
	char	*str;

	j = 0;
	l = 1;
	dup2(*fd1, l);
	close(*fd1);
	if (inf->date[i])
		execve(inf->date[i][j], inf->date[i], NULL);
	else
	{
		str = ft_strdup(inf->cm_date[i]->instrct);
		ft_pipe2(inf, str, i);
		free(str);
	}
	g_line_pipe = "";
	exit(j);
}
