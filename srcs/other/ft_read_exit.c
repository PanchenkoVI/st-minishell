/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_read_exit(void)
{
	if (g_key == 2)
		exit(0);
	else
	{
		ft_putstr("exit\n");
		exit(0);
	}
}
