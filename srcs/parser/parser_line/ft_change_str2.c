/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

char	*ft_change_str2(char *str, int i, char **env)
{
	char ch;

	while (str[i])
	{
		ch = str[i];
		if (ft_sign(str[i], "\"\'"))
			str = ft_change_sign(env, str, &i, ch);
		else if (str[i] == '\\' && str[i + 1])
		{
			str = ft_reduction_arr(str, i, 0);
			i++;
		}
		else if (str[i] == '$' && (ft_isalnum(str[i + 1]) || \
			str[i + 1] == '?') && g_xp != 1)
			str = ft_var_replacement(str, 0, env, &i);
		else
			i++;
	}
	g_qm = 0;
	return (str);
}
