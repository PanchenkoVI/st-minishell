/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_sign_clmll(int i, t_variable *tmp1, t_instruct *tmp2, int n)
{
	if (n == 1)
	{
		while (tmp1->fvar[i])
		{
			free(tmp1->fvar[i]);
			i++;
		}
		free(tmp1->fvar);
		ft_free(tmp1->arvar);
	}
	else if (n == 2)
	{
		while (tmp2->flag[i])
		{
			free(tmp2->flag[i]);
			i++;
		}
		free(tmp2->flag);
		ft_free(tmp2->arg);
		ft_free(tmp2->name);
		ft_free(tmp2->spaces);
	}
}
