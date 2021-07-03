/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_lstadd_back(t_instruct **lst, t_instruct *new)
{
	t_instruct	*end;

	if (new != 0)
	{
		end = ft_lstlast(*lst);
		if (end != 0)
			end->next = new;
		else
			*lst = new;
		new->next = NULL;
	}
}
