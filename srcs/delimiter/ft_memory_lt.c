/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

t_instruct	*ft_memory_lt(t_instruct *new, int i)
{
	if (!(new = (t_instruct *)ft_calloc(sizeof(t_instruct), 1)))
		i = 1;
	else if (!(new->spaces = (char **)ft_calloc(sizeof(char *), 1)))
		i = 1;
	else if (!(new->flag = (char **)ft_calloc(sizeof(char *), 1)))
		i = 1;
	else if (!(new->arg = (char **)ft_calloc(sizeof(char *), 1)))
		i = 1;
	else if (!(new->name = (char **)ft_calloc(sizeof(char *), 1)))
		i = 1;
	if (i == 1)
	{
		ft_putstr_fd("Problem in ft_calloc\n", 0);
		exit(12);
	}
	new->next = NULL;
	return (new);
}
