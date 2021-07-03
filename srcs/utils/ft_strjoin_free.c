/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

char	*ft_strjoin_free(char *s1, char *s2)
{
	char			*spr;
	int				n;
	int				k;

	if (!s1 && !s2)
		return (NULL);
	k = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(spr = (char *)malloc(sizeof(char) * k)))
	{
		ft_putstr_fd("Problem in *str (Malloc).\n", 0);
		exit(12);
	}
	n = 0;
	spr = ft_strjoin_free2(spr, s1, s2, n);
	free((void *)s1);
	return (spr);
}
