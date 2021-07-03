/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

char	*ft_for_pwd21(char *str, int j, int i, int *m)
{
	char *tmp;
	char *tmp2;

	*m = i;
	tmp = ft_substr(str, 0, j);
	if (str[i] == '\0')
	{
		free(str);
		str = ft_strdup(tmp);
		free(tmp);
		return (str);
	}
	else
		tmp2 = ft_substr(str, *m, ft_strlen(str) - 1);
	*m = 1;
	free(str);
	str = ft_strjoin_free(tmp, tmp2);
	free(tmp2);
	return (str);
}
