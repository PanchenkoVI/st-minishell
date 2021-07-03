/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_env_echo(t_instruct *instrct, int i)
{
	while (instrct->arg[i] != NULL)
	{
		if (i != 1)
			ft_putstr(" ");
		ft_putstr(instrct->arg[i]);
		i++;
	}
	ft_putstr("\n");
}
