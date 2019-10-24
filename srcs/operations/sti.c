/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sti.c                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: tide-jon <tide-jon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/16 19:57:37 by tide-jon       #+#    #+#                */
/*   Updated: 2019/10/17 16:20:42 by tide-jon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/corewar.h"

void		sti(t_vm *vm, t_cursor *cursor)
{
	int	first_arg;
	int second_arg;
	int	third_arg;
	int	i;

	first_arg = cursor->reg[FIRST_ARG - 1];
	if (cursor->operation.check[1] == REG_CODE)
		second_arg = cursor->reg[SECOND_ARG - 1];
	else
		second_arg = SECOND_ARG;
	if (cursor->operation.check[2] == REG_CODE)
		third_arg = cursor->reg[THIRD_ARG];
	else if (cursor->operation.check[2] == DIR_CODE)
		third_arg = THIRD_ARG;
	i = 0;
	while (i < 4)
	{
		vm->memory[ft_modulo(cursor->position +
		((second_arg + third_arg) % IDX_MOD) + i, MEM_SIZE)] =
													(char)first_arg;
		first_arg = first_arg >> 8;
		i++;
	}
}
