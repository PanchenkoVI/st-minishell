/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_com3(t_info *ins, char *str)
{
	if (str[0] == 'e' && str[1] == 'n' && \
		str[2] == 'v' && str[3] == '\0')
		ft_cdenv(ins->instrct, 0, ins->cmd_env);
	else if (str[0] == 'e' && str[1] == 'x' && \
		str[2] == 'i' && str[3] == 't' && str[4] == '\0')
		ft_exit(ins, ins->instrct, 0);
	else if (str[0] == 'e' && str[1] == 'c' && \
		str[2] == 'h' && str[3] == 'o' && str[4] == '\0')
		ft_echo(ins->instrct, ins->cmd_env, 0);
	else if (str[0] == 'u' && str[1] == 'n' && \
		str[2] == 's' && str[3] == 'e' && str[4] == 't' && \
		str[5] == '\0')
	{
		g_print_err = "0";
		ft_unset(ins, ins->instrct, 0, 0);
	}
	else if (str[0] == 'e' && str[1] == 'x' && \
		str[2] == 'p' && str[3] == 'o' && str[4] == 'r' && \
		str[5] == 't' && str[6] == '\0')
		ft_export(ins, 0, ins->instrct, 0);
	else
		ft_other(ins->instrct, 0, ins->cmd_env, 0);
}
