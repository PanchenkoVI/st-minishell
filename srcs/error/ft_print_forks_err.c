/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_print_forks_err(void)
{
	ft_putstr(g_cd);
	free(g_cd);
	ft_putstr(": command not found\n");
	g_print_err = "127";
}
