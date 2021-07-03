/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		n;

	if (!s1)
		return (NULL);
	n = 0;
	while (s1[n])
		n++;
	if (!(str = (char *)malloc(sizeof(char) * (n + 1))))
	{
		ft_putstr_fd("Problem in *str (Malloc).\n", 0);
		exit(12);
	}
	n = 0;
	while (s1[n])
	{
		str[n] = s1[n];
		n++;
	}
	str[n] = '\0';
	return (str);
}
