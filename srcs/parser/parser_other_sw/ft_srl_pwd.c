/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

int		ft_srl_pwd(char *str)
{
	int i;
	int flag;
	int l;

	i = 0;
	l = 0;
	flag = ft_quantity_pwd(str);
	while (str[i] != '\0' && str[i] != '\'' && str[i] != '\"')
		i++;
	if (flag > 0 || ft_str(str) < 0)
		return (-1);
	else if (ft_quantity_echo(str) == 1 && str[i] == '\0')
		return (-1);
	else if (ft_srl_pwd2(str) <= 0)
		return (-1);
	return (1);
}
