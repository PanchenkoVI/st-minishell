/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_g_red_errr(int z, t_info *inf)
{
	g_print_err = "258";
	if (z == 1)
		ft_error("syntax error near unexpected token `newline'", inf);
	else if (z == 2)
		ft_error("2syntax error near unexpected token `;'", inf);
	else if (z == 3)
		ft_error("syntax error near unexpected token `|'", inf);
	else if (z == 4)
		ft_error("syntax error near unexpected token `>'", inf);
	else if (z == 5)
		ft_error("syntax error near unexpected token `>>'", inf);
	else if (z == 6)
		ft_error("syntax error near unexpected token `<'", inf);
	else if (z == 7)
		ft_error("syntax error near unexpected token `<<'", inf);
	else if (z == 8)
		ft_error("syntax error near unexpected token `<<<'", inf);
	else if (z == 9)
		ft_error("syntax error near unexpected token `<>'", inf);
	ft_error("syntax error near unexpected token `<' or(and) `>'", inf);
}
