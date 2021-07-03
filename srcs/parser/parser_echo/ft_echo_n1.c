/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

char	*ft_echo_n1(char *str, int i, int *j)
{
	char *tmp;

	tmp = ft_substr(str, 0, i + 2);
	i += 1;
	*j = i;
	while (str[i] == 'n')
		i++;
	str = ft_substr(str, i, ft_strlen(str));
	str = ft_strjoin_free(tmp, str);
	return (str);
}
