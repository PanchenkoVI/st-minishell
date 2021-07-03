/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

char	*ft_anlz_and_add(char *line)
{
	char	*str;

	str = ft_strdup(line);
	str = ft_newline(str);
	if (ft_uuu(str) == 0)
	{
		if (ft_nnn(str, 0) > 0)
		{
			str = ft_echo_n(str, 0, 0);
			str = ft_space_n(str, 0, 0);
			str = ft_double_n(str, 0, 0, -1);
			str = ft_qm_for_n(str, 0, 0, -1);
		}
	}
	str = ft_multiline_str(str, 0);
	free(line);
	str = ft_strjoin_free(str, "\n");
	return (str);
}
