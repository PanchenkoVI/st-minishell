/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

char	**ft_for_cd_slash(char **spr, int i)
{
	int n;
	int m;
	int len;

	len = ft_strlen_arr(spr);
	n = i;
	m = 0;
	spr = ft_for_cd_slash2(spr, &i, &m);
	if (spr[i] == 0)
		m = i - 1;
	if (m != 0)
		spr = ft_reduction_arr2(spr, n, m, len);
	return (spr);
}
