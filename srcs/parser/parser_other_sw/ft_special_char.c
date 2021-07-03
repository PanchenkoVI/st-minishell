/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

int		ft_special_char(char *line, int i, int j)
{
	int l;

	l = 0;
	while (line[i])
	{
		if (line[i] == '\'' || line[i] == '\"')
		{
			j = i + 1;
			j = ft_cout_j(line, i, &l);
			if (j != i)
				i = ft_about_i(line, i, j);
		}
		else if ((l = ft_delate_line(line, &i)) != 0)
		{
			if (l == -1)
				break ;
			else if (l != -1 && l != 0)
				return (l);
		}
		else
			i++;
	}
	return (i);
}
