/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

char	**ft_unset_str_crc(char **spr, char **new, int *l)
{
	int n;

	n = 0;
	while (new[n])
	{
		spr[n] = ft_strdup(new[n]);
		n++;
	}
	*l = n;
	return (spr);
}
