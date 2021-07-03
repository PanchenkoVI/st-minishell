/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

char	*ft_ssstr(char *str, char *line, int j)
{
	str = ft_strdup(line);
	free(line);
	ft_dqdq(str, 0, 0);
	str = ft_reduction_arr(str, j, 0);
	return (str);
}
