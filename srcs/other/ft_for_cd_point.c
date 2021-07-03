/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

char	**ft_for_cd_point(char **spr, int i)
{
	int		n;
	int		m;
	int		len;
	char	*tmp;

	n = i;
	tmp = ft_strdup(spr[i - 1]);
	len = ft_strlen_arr(spr);
	m = 0;
	spr = ft_for_cd_point2(spr, tmp, &i, &m);
	if (spr[i] == 0)
		m = i - 1;
	if (m != 0)
		spr = ft_reduction_arr2(spr, n, m, len);
	i = 0;
	free(tmp);
	return (spr);
}
