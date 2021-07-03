/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

t_instruct	*ft_lstlast(t_instruct *lst)
{
	t_instruct *past;

	past = lst;
	if (lst != 0)
	{
		while (past->next)
			past = past->next;
	}
	return (past);
}
