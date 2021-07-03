/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

char	*ft_reduction_arr1(char *str, int n, int m, int len)
{
	char	*arr;
	int		l;

	l = m - n;
	if (!(arr = (char *)malloc(sizeof(char *) * (len - l))))
		return (NULL);
	l = 0;
	n--;
	while (l != n)
	{
		arr[l] = str[l];
		l++;
	}
	m--;
	while (str[m])
		arr[l++] = str[m++];
	arr[l] = '\0';
	free(str);
	return (arr);
}
