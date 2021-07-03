/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_vertical_line2(t_info *inf, int j, int i)
{
	if (i == 1)
	{
		ft_putstr_fd("Problem in ft_calloc\n", 0);
		exit(12);
	}
	i = 0;
	inf->instrct = ft_info_in_arr(inf, i, 's');
	ft_pipe(inf, i, j, 0);
	while (i < j)
	{
		if (inf->date[i])
			ft_free(inf->date[i]);
		else
			free(inf->date[i]);
		i++;
	}
	free(inf->date);
	free(inf->cm_date);
	free(inf->dt_i);
	free(inf->rdr_date);
	free(inf->dtr);
}
