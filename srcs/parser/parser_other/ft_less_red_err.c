/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

void	ft_less_red_err(char **line, t_info *inf, int i)
{
	i++;
	if (!line[i])
		ft_g_red_errr(1, inf);
	else if (line[i][0] == ';')
		ft_g_red_errr(2, inf);
	else if (line[i][0] == '|')
		ft_g_red_errr(3, inf);
	else if (line[i][0] == '<')
	{
		if (line[i][1] != '<')
			ft_g_red_errr(6, inf);
		else if (line[i][1] == '<' && line[i][2] != '<')
			ft_g_red_errr(7, inf);
		else if (line[i][1] == '<' && line[i][2] == '<')
			ft_g_red_errr(8, inf);
	}
}
