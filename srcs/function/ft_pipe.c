/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_pipe(t_info *inf, int i, int count, int w)
{
	int		dect[2];
	pid_t	p;

	ft_pipe_key_err(i, &w);
	while (i < count)
	{
		if (i < count - 1)
			pipe(dect);
		p = fork();
		if (p < 0)
			ft_cont_pipe(0, 0, 0, 0);
		else if (p == 0)
		{
			if (w != 0)
				ft_cont_pipe(&w, 1, 0, 0);
			if (inf->rdr_date[i])
				ft_red_pipe(inf->rdr_date[i], inf->date[i], inf, i);
			ft_cont_pipe2(&dect[1], inf, i);
		}
		else
			ft_cont_pipe(0, 3, 0, &p);
		ft_cont_pipe(&w, 2, dect, 0);
		i++;
	}
}
