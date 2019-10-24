/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zjmp.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: tide-jon <tide-jon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/16 19:57:37 by tide-jon       #+#    #+#                */
/*   Updated: 2019/10/17 16:20:42 by tide-jon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/corewar.h"

/*
** ZJMP
** If carry == 0, don't jump!
** If carry == 1, calculate new position by argument % IDX_MOD + old position.
** modulo is used to calculate the actual position in memory.
*/

void		zjmp_op(t_vm *vm, t_cursor *cursor)
{
	int			position;

	printf("cursor [%d] is trying to exectute zjmp\n", cursor->id);
	if (!cursor->carry)
	{
		move_to_next_operation(vm, cursor);
		return ;
	}
	printf("position before jump = %d\n", cursor->position);
	position = (FIRST_ARG % IDX_MOD) + cursor->position;
	cursor->position = ft_modulo(position, MEM_SIZE);
	return ;
}
