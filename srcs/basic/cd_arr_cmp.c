/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

int			cd_arr_cmp(t_instruct *instrct, \
t_info *inf, char **path, char **curr_wdir)
{
	int	len;
	int	arr_len;

	arr_len = 0;
	while (instrct->arg[arr_len])
		arr_len++;
	if (arr_len == 0)
		cd_arr_cmp2(inf, path, curr_wdir);
	else if (arr_len > 1)
		return (1);
	else
	{
		*path = NULL;
		len = ft_strlen(instrct->arg[0]);
		if (len != 0 && (ft_strcmp(&instrct->arg[0][len - 1], " ") == 0))
			cd_path_set(instrct, &path, &len);
		else
			*path = ft_strdup(instrct->arg[0]);
	}
	return (0);
}
