/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

void	ft_mb_err(char **line, int i, t_info *inf)
{
	int j;
	int flag_minus;
	int flag_plus;

	flag_plus = 0;
	flag_minus = 0;
	j = 0;
	while (line[i][j] != 0)
	{
		if (line[i][j] == '>')
			flag_plus++;
		else if (line[i][j] == '<')
			flag_minus++;
		j++;
	}
	j--;
	if (flag_plus > 0 && flag_minus > 0 && \
		(line[i][j] == '>' || line[i][j] == '<'))
	{
		if (flag_plus != flag_minus)
			ft_g_red_errr(0, inf);
		else if (flag_plus == flag_minus)
			ft_equality_plus_minus(line, i, inf, line[i][j]);
	}
}
