/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_open_file2(int name_flag, char *name)
{
	if (name_flag == 1)
	{
		g_print_err = "127";
		errno = -5;
	}
	else if (name_flag == 2)
		errno = -5;
	else
		g_print_err = "1";
	if (!name && errno == 14)
		errno = 21;
	else if (g_n == 1)
	{
		g_print_err = "0";
		g_n = 2;
	}
}
