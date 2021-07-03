/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	line_structure_parse(char **date, char **spaces, t_info *inf, int j)
{
	int i;

	i = 0;
	if (j > 0)
	{
		g_print_err = "258";
		inf->sign->arvar = ft_arr2_sub_str(inf->sign->arvar, "\'", 0);
		if (j == 1)
			ft_error("syntax error near unexpected token `;'", inf);
		else if (j == 2)
			ft_error("syntax error near unexpected token `;;'", inf);
		else if (j == 3)
			ft_error("syntax error near unexpected token `|'", inf);
		else if (j == 4)
			ft_error("syntax error near unexpected token `||'", inf);
	}
	line_structure_parse2(date, spaces, inf, i);
}
