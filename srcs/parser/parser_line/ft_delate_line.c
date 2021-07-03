/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

int		ft_delate_line(char *line, int *i)
{
	if (line[*i] == '\\' && line[*i + 1] == '\0')
	{
		*i = *i + 1;
		return (-1);
	}
	else if (line[*i] == '\\')
	{
		if (line[*i + 1] != '\'')
			*i = *i + 1;
		*i = *i + 1;
		return (*i);
	}
	else if (*i == 0 && (line[*i] == ';' || line[*i] == '|' || \
		line[*i] == '>' || line[*i] == '<'))
		return (ft_delate_line2(line, &i));
	else if (line[*i] == ';' || line[*i] == '|' || \
		line[*i] == '>' || line[*i] == '<' || line[*i] == ' ' || \
		line[*i] == '\t')
		return (*i);
	return (0);
}
