/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_save_info(t_instruct *instrct, int dect, char *line)
{
	char **tmp;

	tmp = instrct->flag;
	if (instrct->sign == '|')
		ft_putstr(line);
	else
	{
		if (!tmp[0])
			ft_putstr(line);
		ft_save_info1(instrct, &line, 0, dect);
	}
	free(line);
}
