/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

int		ft_about_i(char *line, int i, int j)
{
	while (i != j)
	{
		if (line[i] == '\\' && line[i + 1] != '$')
		{
			i = j;
			break ;
		}
		i++;
	}
	if (line[i] == '\'' || line[i] == '\"')
		i = j + 1;
	return (i);
}
