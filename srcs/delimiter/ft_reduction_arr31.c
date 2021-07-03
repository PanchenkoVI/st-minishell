/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

char	*ft_reduction_arr31(char *spr, char *str, int n, int l)
{
	n++;
	while (str[n] != '\0')
	{
		spr[l] = str[n];
		l++;
		n++;
	}
	spr[l] = '\0';
	return (spr);
}
