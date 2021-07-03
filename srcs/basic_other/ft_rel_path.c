/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

int		ft_rel_path(t_info *inf, int i, int n)
{
	if (inf->date[i][0][0] == '/')
		n = 0;
	else if (ft_sign('/', inf->date[i][0]))
		inf->date[i][0] = ft_rel_p(inf->date[i][0], 0);
	else
	{
		inf->date[i][0] = ft_run_p(inf->date[i][0], inf->cmd_env, 0);
		n = 1;
	}
	return (n);
}
