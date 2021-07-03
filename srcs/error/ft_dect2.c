/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_dect2(t_instruct *instrct, char *line)
{
	g_print_err = "1";
	ft_printf_err(instrct->instrct, errno);
	free(line);
}
