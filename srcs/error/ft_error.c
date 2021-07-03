/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_error(char *line, t_info *inf)
{
	char	*line_for_error;

	line_for_error = ft_strdup("");
	line_for_error = ft_strjoin_free(line_for_error, line);
	line_for_error = ft_strjoin_free(line_for_error, "\n");
	ft_putstr(line_for_error);
	free(line_for_error);
	ft_all_cl(inf, 0);
	ft_start_window(inf, 0, 's');
}
