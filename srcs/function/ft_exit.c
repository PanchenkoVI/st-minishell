/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

static int	ft_flag_for_exit(t_instruct *instrct)
{
	ft_putstr("exit: ");
	ft_putstr(instrct->arg[0]);
	ft_putstr_fd(": numeric argument required\n", 0);
	return (255);
}

void		ft_exit(t_info *inf, t_instruct *instrct, int flag)
{
	if (instrct->arg[0] != NULL)
	{
		if (instrct->arg[1] != NULL)
		{
			if (ft_exit2(instrct) == 1)
				return ;
		}
		else
			ft_putstr("exit\n");
		flag = ft_atoi(instrct->arg[0]);
		if (ft_analiz_arg_exit(instrct->arg[0], 0, 0) == -1)
			ft_exit3(instrct, &flag);
		else if ((ft_isdigit(instrct->arg[0][0]) == 1) && \
			(ft_atoi(instrct->arg[0]) == -1))
			flag = ft_flag_for_exit(instrct);
	}
	else
		ft_putstr("exit\n");
	ft_all_cl(inf, 0);
	ft_free(inf->cmd_env);
	exit(flag);
}
