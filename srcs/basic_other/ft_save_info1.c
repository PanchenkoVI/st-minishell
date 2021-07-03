/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_save_info1(t_instruct *instrct, char **line, int i, int dect)
{
	char **tmp;

	tmp = instrct->flag;
	while (tmp[i])
	{
		if (ft_save_info0(instrct, *line, i, &dect) == -1)
		{
			ft_dect2(instrct, *line);
			break ;
		}
		ft_putstr_fd(*line, dect);
		if (close(dect) == -1)
		{
			ft_dect2(instrct, *line);
			break ;
		}
		i++;
	}
}
