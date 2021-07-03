/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

char	*ft_replacement2(char *str, int i)
{
	char *tmp1;
	char *tmp2;

	tmp1 = ft_substr(str, 0, i);
	tmp2 = ft_substr(str, i + 2, ft_strlen(str));
	free(str);
	str = ft_strjoin_free(tmp1, tmp2);
	free(tmp2);
	return (str);
}
