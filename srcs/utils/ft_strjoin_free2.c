/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

char	*ft_strjoin_free2(char *spr, char *s1, char *s2, int n)
{
	int		m;

	m = 0;
	if (s1)
	{
		while (s1[n])
		{
			spr[m] = s1[n];
			n++;
			m++;
		}
	}
	n = 0;
	while (s2[n])
	{
		spr[m] = s2[n];
		m++;
		n++;
	}
	spr[m] = '\0';
	return (spr);
}
