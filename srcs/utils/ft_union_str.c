/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

char	*ft_union_str(char *s1, char *s2)
{
	size_t	n;
	size_t	m;
	char	*spr;

	if (!s1 || !s2)
		return (NULL);
	n = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(spr = (char *)malloc(sizeof(char) * n)))
		return (NULL);
	n = 0;
	while (s1[n])
	{
		spr[n] = s1[n];
		n++;
	}
	m = 0;
	while (s2[m])
	{
		spr[n] = s2[m];
		m++;
		n++;
	}
	spr[n] = '\0';
	return (spr);
}
