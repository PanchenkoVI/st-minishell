/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_relation_f2(int flag, t_instruct *instrct)
{
	if (g_src == 1)
	{
		g_src = 0;
		g_print_err = "1";
		errno = 2;
		return ;
	}
	else if (g_src == -1)
	{
		g_src = 0;
		g_print_err = "0";
		ft_printf_err(instrct->instrct, errno);
		return ;
	}
	else
		g_print_err = "127";
	ft_relation_f3(flag, instrct);
}
