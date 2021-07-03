/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

int		ft_red_in_line(t_info *inf, char **line, t_instruct *fresh, int *l)
{
	int i;

	i = *l;
	if (line[i][0] == '>')
	{
		fresh->flag = ft_arr2_sub_str(fresh->flag, line[i], 0);
		ft_red_err(line, i++, inf);
		fresh->name = ft_arr2_sub_str(fresh->name, line[i++], 0);
		*l = i;
		return (0);
	}
	else if (line[i][0] == '<')
	{
		fresh->flag = ft_arr2_sub_str(fresh->flag, line[i], 0);
		ft_red_err(line, i++, inf);
		fresh->name = ft_arr2_sub_str(fresh->name, line[i++], 0);
		*l = i;
		return (0);
	}
	*l = i;
	return (1);
}
