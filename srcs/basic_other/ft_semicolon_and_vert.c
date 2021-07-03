/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

int		ft_semicolon_and_vert(char *line, t_instruct *fresh)
{
	if (line[0] == '|' && line[1] == '\0')
	{
		fresh->sign = line[0];
		fresh->sp = line[0];
		fresh->ps = line[1];
		return (1);
	}
	else if (line[0] == ';' && line[1] == '\0')
	{
		fresh->sign = line[0];
		fresh->sp = line[0];
		fresh->ps = line[1];
		return (1);
	}
	return (0);
}
