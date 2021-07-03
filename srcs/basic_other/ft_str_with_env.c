/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

char	*ft_str_with_env(t_info *inf, char *str, int j, int i)
{
	char	*tmp;
	char	*tmp2;
	int		m;

	i = j;
	m = j;
	j++;
	while (str[j])
	{
		if (ft_isalnum(str[j]) == 0)
			break ;
		j++;
	}
	tmp2 = ft_substr(str, i, j - i);
	i = 0;
	tmp = ft_var_replacement(tmp2, 0, inf->cmd_env, &i);
	if (ft_sps_dlr(tmp) == 1)
		str = ft_with_spacess_line(tmp, str, &m, j);
	if (m > 0 && ft_sps_dlr(tmp) == 1)
		str = ft_str_with_env(inf, str, m, 0);
	free(tmp);
	return (str);
}
