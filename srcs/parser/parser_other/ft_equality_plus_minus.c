/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

void	ft_equality_plus_minus(char **line, int i, t_info *inf, char ch)
{
	int len;
	int j;

	j = 0;
	len = ft_strlen(line[i]) - 1;
	while (len > 0)
	{
		if (line[i][len] == ch)
			j++;
		len--;
	}
	if (j == 1 && ch == '<')
		j = 6;
	else if ((j == 2 && ch == '<') || (j > 3 && ch == '>'))
		j = 7;
	else if ((j == 2 && ch == '>') || (j == 3 && ch == '>') ||\
		(j > 3 && ch == '<'))
		j = 5;
	else if (j == 3 && ch == '<')
		j = 4;
	ft_g_red_errr(j, inf);
}
