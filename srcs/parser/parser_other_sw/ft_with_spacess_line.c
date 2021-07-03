/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

char	*ft_with_spacess_line(char *tmp, char *str, int *k, int j)
{
	char	*s1;
	char	*s2;
	int		i;
	int		m;

	i = *k;
	m = -1;
	s1 = ft_substr(str, 0, i);
	s1 = ft_strjoin_free(s1, tmp);
	s2 = ft_substr(str, j, ft_strlen(str));
	free(str);
	str = ft_strjoin_free(s1, s2);
	free(s2);
	i = -1;
	if (j > 0)
		m = ft_dollar(str, j - 1, &i);
	if (m > 0 && i > 0)
		*k = i;
	else
		*k = -1;
	return (str);
}
