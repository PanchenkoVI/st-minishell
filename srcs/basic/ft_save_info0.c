/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

int		ft_save_info0(t_instruct *instrct, char *line, int i, int *dect)
{
	char **tmp;

	tmp = instrct->flag;
	if (tmp[i][0] == '>' && tmp[i][1] == '>' && tmp[i][2] == '\0')
	{
		if (ft_save_info2(instrct, &dect, i, line) == -1)
			return (-1);
	}
	else if (tmp[i][0] == '>' && tmp[i][1] == '\0')
	{
		if (ft_save_info2(instrct, &dect, i, line) == -1)
			return (-1);
	}
	else
	{
		if (ft_save_info2(instrct, &dect, i, line) == -1)
			return (-1);
	}
	return (0);
}
