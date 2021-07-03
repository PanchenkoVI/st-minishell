/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_l_s_p3(char **date, t_info *inf, t_instruct *new, int j)
{
	if (!(date[j]))
		new->sign = '\0';
	new->sp = '\0';
	if (!(new->instrct))
		new->instrct = ft_strdup(">");
	new->sp = ' ';
	inf->sign->arvar = ft_arr2_sub_str(inf->sign->arvar, new->instrct, 0);
}
