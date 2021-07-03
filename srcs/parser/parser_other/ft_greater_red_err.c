/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

void	ft_greater_red_err(char **line, t_info *inf, int i)
{
	i++;
	if (!line[i])
		ft_g_red_errr(1, inf);
	else if (line[i][0] == ';')
		ft_g_red_errr(2, inf);
	else if (line[i][0] == '|')
		ft_g_red_errr(3, inf);
	else if (line[i][0] == '>')
	{
		if (line[i][1] != '>')
			ft_g_red_errr(4, inf);
		else if (line[i][1] == '>')
			ft_g_red_errr(5, inf);
	}
}
