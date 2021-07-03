/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

static char	*ft_ch_sn2(char *str, int *l, char ch, char **env)
{
	int		j;

	j = *l;
	if ((str[j] == '\\' && (str[j + 1] == ch || \
		str[j + 1] == '\\')) && (g_qm != -1))
		str = ft_change_sign2(str, &j, ch);
	else if (str[j] == '\\' && (str[j + 1] == '$' && (g_qm != -1)))
		str = ft_reduction_arr(str, j++, 0);
	else if (str[j] == '$' && (str[j + 1] == '?') && (g_qm != -1))
		str = ft_var_replacement(str, 0, env, &j);
	else if (str[j] == '$' && (ft_isalnum(str[j + 1]) && (g_qm != -1)))
		str = ft_var_replacement(str, 0, env, &j);
	*l = j;
	return (str);
}

char		*ft_change_sign(char **env, char *line, int *i, char ch)
{
	char	*str;
	int		j;

	str = NULL;
	j = *i;
	str = ft_ssstr(str, line, j);
	while (str[j])
	{
		if ((g_qm != -1) && ((str[j] == '\\' && (str[j + 1] == ch || \
			str[j + 1] == '\\')) || (str[j] == '\\' && \
			str[j + 1] == '$') || (str[j] == '$' && str[j + 1] == '?') || \
			(str[j] == '$' && ft_isalnum(str[j + 1]))))
			str = ft_ch_sn2(str, &j, ch, env);
		else if (str[j] == ch)
		{
			str = ft_reduction_arr(str, j, 0);
			break ;
		}
		else
			j++;
	}
	*i = j;
	return (str);
}
