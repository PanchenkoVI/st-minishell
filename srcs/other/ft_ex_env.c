/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_ex_env(t_info *inf, int *l, int i)
{
	char	*name;
	char	*tmp_v;
	int		n;

	ft_exp_save_char2(inf->instrct->arg[i], &name, &tmp_v, 1);
	n = 0;
	while (inf->cmd_env[n])
	{
		if (ft_strcmp(inf->cmd_env[n], name) == 0)
		{
			n++;
			free(inf->cmd_env[n]);
			inf->cmd_env[n] = ft_export_str(inf->cmd_env[n], tmp_v, n, 2);
			break ;
		}
		n++;
	}
	free(name);
	free(tmp_v);
	*l = n;
}
