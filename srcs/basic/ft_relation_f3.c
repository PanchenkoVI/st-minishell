/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_relation_f3(int flag, t_instruct *instrct)
{
	if (g_flag == 1)
	{
		g_flag = 0;
		g_print_err = "126";
	}
	if (flag == 0)
	{
		if (errno == 0)
		{
			g_print_err = "126";
			errno = 13;
		}
		else
			errno = -5;
		ft_printf_err(instrct->instrct, errno);
	}
}
