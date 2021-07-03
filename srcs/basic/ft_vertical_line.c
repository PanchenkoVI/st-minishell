/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_vertical_line(int j, int i, t_info *ins)
{
	t_instruct	*lst;

	lst = ins->instrct;
	if (lst->sign == '|')
	{
		while (lst->sign == '|')
		{
			j++;
			if (lst->next == NULL)
				break ;
			lst = lst->next;
		}
	}
	if (!(ins->date = (char ***)ft_calloc(sizeof(char **), j + 1)))
		i = 1;
	else if (!(ins->cm_date = \
		(t_instruct **)ft_calloc(sizeof(t_instruct *), j)))
		i = 1;
	else if (!(ins->dt_i = (int *)ft_calloc(sizeof(int), j)))
		i = 1;
	else if (!(ins->rdr_date = (int *)ft_calloc(sizeof(int), j)))
		i = 1;
	else if (!(ins->dtr = (int *)ft_calloc(sizeof(int), j)))
		i = 1;
	ft_vertical_line2(ins, j, i);
}
