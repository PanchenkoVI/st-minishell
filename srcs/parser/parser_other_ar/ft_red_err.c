/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

void	ft_red_err(char **line, int i, t_info *inf)
{
	int j;

	j = 0;
	if (line[i][0] == '>' && line[i][1] == '\0')
		ft_greater_red_err(line, inf, i);
	else if (line[i][0] == '>' && line[i][1] == '>' && line[i][2] == '\0')
		ft_greater_red_err(line, inf, i);
	else if (line[i][0] == '>' && line[i][1] == '>' && line[i][2] == '>' &&\
		line[i][3] == '\0')
		ft_g_red_errr(4, inf);
	else if (line[i][0] == '>' && line[i][1] == '>' && line[i][2] == '>' &&\
		line[i][3] == '>')
	{
		while (line[i][j] != '\0' && line[i][j] == '>')
			j++;
		if (line[i][j] == '\0' || line[i][j] == '<')
			ft_g_red_errr(5, inf);
	}
	else if ((ft_strcmp(line[i], "<") == 0) && line[i][j + 1] == '\0')
		ft_less_red_err(line, inf, i);
	ft_red_err2(line, i, inf);
	ft_mb_err(line, i, inf);
}
