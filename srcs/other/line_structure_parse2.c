/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

static void		ft_l_struct_p(t_info *inf, int *l, char **date)
{
	int		i;

	i = *l;
	i++;
	inf->sign->fvar = ft_arr2_sub_str(inf->sign->fvar, date[i], 0);
	*l = i;
}

void			line_structure_parse2(char **date, char **spaces, \
										t_info *inf, int i)
{
	int			j;
	t_instruct	*new;

	while (date[i])
	{
		if (date[i][0] == ';' && date[i][1] == '\0')
			ft_l_struct_p(inf, &i, date);
		else if (date[i][0] == '|' && date[i][1] == '\0')
		{
			i++;
			inf->sign->fvar = ft_arr2_sub_str(inf->sign->fvar, date[i], 0);
		}
		else
		{
			new = NULL;
			new = ft_memory_lt(new, 0);
			new->instrct = NULL;
			j = ft_new_all(spaces, new, inf, &date[i]);
			ft_l_s_p3(date, inf, new, j);
			ft_lstadd_back(&(inf->instrct), new);
			i = i + j;
		}
	}
}
