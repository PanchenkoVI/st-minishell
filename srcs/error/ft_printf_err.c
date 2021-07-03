/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_printf_err(char *com_name, errno_t error_num)
{
	char	*line;

	if (ft_error_zero(com_name, -1) == 1)
	{
		ft_putstr("");
		return ;
	}
	ft_mb(com_name, 0, 0, &error_num);
	if (com_name[0] == '0' && com_name[1] == '\0' && g_for_er <= 0)
		line = ft_union_str(g_print_err, ": ");
	else
		line = ft_union_str(com_name, ": ");
	g_for_er--;
	if (error_num == -5)
		line = ft_strjoin_free(line, "command not found");
	else if (error_num == -1)
		line = ft_strjoin_free(line, "filename argument \
		required\n.: usage: . filename [arguments]");
	else if (g_flag == 1)
		line = ft_strjoin_free(line, "is a directory");
	else
		line = ft_strjoin_free(line, (char *)strerror(error_num));
	line = ft_strjoin_free(line, "\n");
	ft_putstr_fd(line, 0);
	free(line);
}
