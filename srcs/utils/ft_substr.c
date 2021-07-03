/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

char	*ft_substr(char *s, int start, int len)
{
	int		sub;
	int		m;
	char	*spr;

	if (!s)
		return (NULL);
	m = 0;
	sub = ft_strlen(s);
	if (sub < start)
		len = 0;
	else
	{
		sub = sub - start;
		if (sub < len)
			len = sub;
	}
	if (!(spr = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (m < len)
	{
		spr[m] = s[m + start];
		m++;
	}
	spr[m] = '\0';
	return (spr);
}
