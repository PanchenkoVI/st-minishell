/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

int		ft_delate_line2(char *line, int **i)
{
	if (line[**i] == '|')
		g_print_err = "0";
	**i = **i + 1;
	if (line[**i] == '<' || line[**i] == '>')
	{
		while (line[**i] == '<' || line[**i] == '>')
			**i = **i + 1;
	}
	return (**i);
}
