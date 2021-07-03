/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

t_instruct	*ft_info_in_arr(t_info *inf, int i, char s)
{
	int		m;

	while (s == 's')
	{
		m = 0;
		ft_spec_cmd(inf->instrct->instrct, &m);
		ft_info_in_a(inf, m, i);
		ft_info_in_arr2(inf, &i, &s, 1);
		inf->instrct = inf->instrct->next;
	}
	return (inf->instrct);
}
