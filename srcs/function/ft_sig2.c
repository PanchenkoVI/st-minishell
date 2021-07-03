/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_sig2(int i)
{
	g_key = 13;
	if (g_point == 1 && (i == SIGQUIT))
	{
		if (g_sign != 2)
			ft_putstr("Quit: 3\n");
		g_print_err = "131";
	}
	else if (i == SIGINT)
	{
		if (g_point == 1)
		{
			if (g_sign != 2)
				write(1, "\n", 1);
			g_print_err = "130";
		}
		else
		{
			if (g_sign != 2)
				write(1, "\n", 1);
			if (g_sign != 2)
				ft_putstr(g_for_sig);
		}
	}
}
