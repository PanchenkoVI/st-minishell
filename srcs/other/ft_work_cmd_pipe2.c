/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_work_cmd_pipe2(char *str, t_info *inf, int i)
{
	if (str[0] == 'e' && str[1] == 'x' && str[2] == 'i' && \
		str[3] == 't' && str[4] == '\0')
		ft_exit(inf, inf->cm_date[i], 0);
	else if (str[0] == 'e' && str[1] == 'x' && str[2] == 'p' && \
		str[3] == 'o' && str[4] == 'r' && str[5] == 't' && \
			str[6] == '\0')
		ft_export(inf, 0, inf->cm_date[i], 0);
	else if (str[0] == 'u' && str[1] == 'n' && str[2] == 's' && \
		str[3] == 'e' && str[4] == 't' && str[5] == '\0')
	{
		g_print_err = "0";
		ft_unset(inf, inf->cm_date[i], 0, 0);
	}
	else if (str[0] == 'e' && str[1] == 'n' && str[2] == 'v' && \
		str[3] == '\0')
		ft_cdenv(inf->instrct, 0, inf->cmd_env);
	else if (str[0] == '>' && str[1] == '\0')
		ft_red(inf->cm_date[i]);
	else
		ft_other(inf->cm_date[i], 0, inf->cmd_env, 0);
}
