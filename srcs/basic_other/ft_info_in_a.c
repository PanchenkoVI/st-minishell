/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_info_in_a(t_info *inf, int j, int i)
{
	int		n;
	int		l;

	l = 0;
	n = 0;
	if (j == 0)
	{
		if (!(inf->date[i] = (char **)malloc(sizeof(char *) + 1)))
			ft_error("Problem in Malloc", inf);
		inf->date[i][0] = NULL;
		inf->date[i] = ft_arr2_sub_str(inf->date[i], inf->instrct->instrct, 0);
		while (inf->instrct->arg[l])
			inf->date[i] = ft_arr2_sub_str(inf->date[i],
			inf->instrct->arg[l++], 0);
		n = ft_rel_path(inf, i, n);
		g_point = 1;
		g_print_err = "0";
		j = ft_open_file(inf->instrct, 0, inf->date[i][0], n);
		inf->cm_date[i] = NULL;
	}
	else
		ft_info_in_arr2(inf, &i, 0, 2);
}
