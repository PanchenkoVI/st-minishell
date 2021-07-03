/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

int	ft_exit2(t_instruct *instrct)
{
	if (ft_analiz_arg_exit(instrct->arg[0], 0, 0) == 1)
	{
		g_print_err = "1";
		ft_putstr("exit\n");
		ft_putstr_fd("exit: too many arguments\n", 0);
		return (1);
	}
	else
	{
		g_print_err = "1";
		ft_putstr("exit\nexit: ");
		ft_putstr(instrct->arg[0]);
	}
	return (0);
}
