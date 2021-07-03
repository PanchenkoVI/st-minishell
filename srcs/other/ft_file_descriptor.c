/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

int		ft_file_descriptor(t_instruct *instrct)
{
	int		dect;
	char	*tmp;

	tmp = instrct->flag[0];
	if (!tmp)
		return (0);
	if (tmp[0] == '>' && tmp[1] == '>' && tmp[2] == '\0')
	{
		if (ft_dect(instrct, &dect, (O_RDWR | O_CREAT | O_APPEND), 0) == -1)
			return (-1);
	}
	else if (tmp[0] == '>' && tmp[1] == '\0')
	{
		if (ft_dect(instrct, &dect, (O_RDWR | O_CREAT | O_TRUNC), 0) == -1)
			return (-1);
	}
	else
	{
		if (ft_dect(instrct, &dect, O_RDONLY, 0) == -1)
			return (-1);
	}
	return (dect);
}
