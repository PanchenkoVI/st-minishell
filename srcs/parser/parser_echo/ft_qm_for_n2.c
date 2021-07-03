/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

char	*ft_qm_for_n2(char *str, int m, int j)
{
	char *tmp;
	char *tmp2;

	tmp = ft_substr(str, 0, j);
	tmp = ft_strjoin_free(tmp, "\"");
	tmp2 = ft_substr(str, j, m - j + 1);
	tmp2 = ft_strjoin_free(tmp2, "\"");
	tmp = ft_strjoin_free(tmp, tmp2);
	free(tmp2);
	tmp2 = ft_substr(str, m + 1, ft_strlen(str));
	free(str);
	str = ft_strjoin_free(tmp, tmp2);
	free(tmp2);
	return (str);
}
