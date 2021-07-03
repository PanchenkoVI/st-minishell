/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_pipe2(t_info *inf, char *str, int i)
{
	if (str[0] == '$' && str[1] == '?' && str[2] == '\0')
	{
		ft_putstr("command not found: ");
		ft_putstr(g_print_err);
	}
	else if (str[0] == 'p' && str[1] == 'w' && str[2] == 'd' && str[3] == '\0')
	{
		if (inf->cm_date[i]->arg[0] == NULL)
			ft_pwd(inf->cm_date[i]);
	}
	else if (str[0] == 'e' && str[1] == 'c' && str[2] == 'h' && \
		str[3] == 'o' && str[4] == '\0')
		ft_echo(inf->cm_date[i], inf->cmd_env, 0);
	else if (str[0] == 'c' && str[1] == 'd' && str[2] == '\0')
		ft_cd(inf, inf->cm_date[i], 0);
	else if (str[0] == 'c' && str[1] == 'l' && str[2] == 'e' && \
		str[3] == 'a' && str[4] == 'r' && str[5] == '\0')
	{
		ft_putstr("\033[2J");
		ft_putstr("\033[0;0f");
	}
	else
		ft_pipe3(inf, str, i);
}
