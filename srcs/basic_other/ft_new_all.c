/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

int		ft_new_all(char **s, t_instruct *fresh, t_info *inf, char **str)
{
	int j;

	j = 0;
	while (str[j])
	{
		if ((ft_semicolon_and_vert(str[j], fresh)) == 1)
			break ;
		if (ft_red_in_line(inf, str, fresh, &j) == 1)
		{
			str[j] = ft_change_str(str[j], str, inf->cmd_env);
			if (!(fresh->instrct))
				fresh->instrct = ft_strdup(str[j]);
			else
				ft_scape_str(str, fresh, j, s);
			j++;
		}
	}
	return (j);
}
