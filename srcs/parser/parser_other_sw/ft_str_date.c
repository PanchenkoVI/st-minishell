/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

char	**ft_str_date(t_instruct *instrct, char **date, int i)
{
	date[i] = NULL;
	date = ft_arr2_sub_str(date, instrct->instrct, 0);
	while (instrct->arg[i])
	{
		date = ft_arr2_sub_str(date, instrct->arg[i], 0);
		i++;
	}
	g_print_err = "1";
	return (date);
}
