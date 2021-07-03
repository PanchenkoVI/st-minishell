/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

static void	ft_expr_n_sch(t_info *inf, char *mmm, char *tmp, char *str)
{
	ft_exp_save_char2(mmm, &str, &tmp, 2);
	ft_ex_cont(inf, tmp, str);
}

void		ft_exp_save_char(t_info *inf, t_instruct *instrct, int i, int j)
{
	int		n;
	char	*tmp;
	char	*str;

	tmp = NULL;
	str = NULL;
	n = -1;
	j = ft_time_sign_ex(instrct->arg[i], 0, 2);
	if (instrct->arg[i][j] != '\0')
	{
		tmp = ft_export_str(instrct->arg[i], tmp, j, 1);
		j = 0;
		while (inf->cmd_env[j])
		{
			if (ft_strcmp(inf->cmd_env[j], tmp) == 0)
				ft_ex_env(inf, &n, i);
			j++;
		}
		free(tmp);
		if (n == -1)
			ft_expr_n_sch(inf, instrct->arg[i], tmp, str);
	}
	else
		inf->cmd_export = ft_arr2_sub_str(inf->cmd_export, instrct->arg[i], 0);
}
