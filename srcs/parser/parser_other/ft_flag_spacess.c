/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

int		ft_flag_spacess(t_instruct *t, int i)
{
	int flag;

	flag = 0;
	if (t->arg[i])
	{
		while (t->arg[i])
		{
			if (t->arg[i][0] == '-' && t->arg[i][1] == 'n' && \
				t->arg[i][2] == '\0')
			{
				flag = 1;
				i++;
			}
			else
				break ;
		}
	}
	return (flag);
}
