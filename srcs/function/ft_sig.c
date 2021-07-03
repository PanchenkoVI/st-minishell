/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_sig(int i)
{
	if (g_key == 9)
		ft_sig2(i);
	else if (g_key == 2)
	{
		g_key = 1;
		if (g_sign != 2)
			write(1, "\n", 1);
	}
	else if (i == SIGINT && g_sign != 2)
	{
		if (write(1, "\b\b  \n", 5) < 0)
			return ;
		if (g_point != 1)
		{
			ft_putstr(g_for_sig);
			g_print_err = "1";
		}
	}
	else if (i == SIGQUIT)
		ft_putstr("\b\b  \b\b");
}
