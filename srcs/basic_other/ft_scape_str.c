/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_scape_str(char **line, t_instruct *fresh, int i, char **s)
{
	if ((ft_strcmp(fresh->arg[0], "") == 0) && \
		(ft_strcmp(fresh->spaces[0], " ") == 0))
	{
		free(fresh->spaces[0]);
		fresh->spaces[0] = ft_strdup("");
		fresh->sp = '\0';
		fresh->spaces = ft_arr2_sub_str(fresh->spaces, s[i], 0);
		fresh->ps = ' ';
	}
	else
	{
		fresh->arg = ft_arr2_sub_str(fresh->arg, line[i], 0);
		fresh->sp = ' ';
		fresh->spaces = ft_arr2_sub_str(fresh->spaces, s[i], 0);
		fresh->ps = '\0';
	}
}
