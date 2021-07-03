/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_all_cl(t_info *inf, int i)
{
	t_instruct		*tmp0;
	t_variable		*tmp1;
	t_instruct		*tmp2;

	tmp1 = inf->sign;
	tmp2 = inf->instrct;
	if (inf->sign)
	{
		ft_sign_clmll(i, tmp1, tmp2, 1);
		free(inf->sign);
	}
	if (inf->instrct)
	{
		while (inf->instrct)
		{
			tmp0 = inf->instrct->next;
			free(tmp2->instrct);
			ft_sign_clmll(i, tmp1, tmp2, 2);
			free(tmp2);
			inf->instrct = tmp0;
		}
	}
}
