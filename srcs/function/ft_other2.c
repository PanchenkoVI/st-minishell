/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_other2(int *i, char **date, t_instruct *it, int m)
{
	g_point = 1;
	if (g_flag == 1)
		g_print_err = "126";
	if (g_qm == 1)
	{
		*i = -1;
		g_qm = 0;
		ft_printf_err(date[0], -1);
	}
	else if (g_qm == 2)
	{
		*i = -1;
		g_qm = 0;
		ft_printf_err(date[0], -5);
	}
	else if (g_qm == 3)
	{
		g_qm = 0;
		*i = -1;
		ft_printf_err(date[0], 21);
	}
	else
		*i = ft_open_file(it, 0, date[0], m);
}
