/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_info_in_arr2(t_info *inf, int *l, char *s, int n)
{
	int i;

	i = *l;
	if (n == 1)
	{
		inf->rdr_date[i] = ft_file_descriptor(inf->instrct);
		*s = 'c';
		if (inf->instrct->sign == '|')
		{
			g_print_err = "0";
			*s = 's';
		}
		i++;
	}
	else if (n == 2)
	{
		inf->date[i] = NULL;
		inf->cm_date[i] = inf->instrct;
	}
	*l = i;
}
