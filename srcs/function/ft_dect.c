/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

int		ft_dect(t_instruct *instrct, int *dect, int flag, int i)
{
	if ((*dect = open(instrct->name[i], flag, 0777)) == -1)
	{
		g_print_err = "1";
		ft_printf_err(instrct->instrct, errno);
		return (-1);
	}
	return (0);
}
