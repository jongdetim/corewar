/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_conv_di2.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tide-jon <tide-jon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/06/28 17:24:27 by tide-jon       #+#    #+#                */
/*   Updated: 2019/10/02 19:26:12 by tide-jon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		lowestll_printf(t_printf *data)
{
	write(1, "8", 1);
	data->width--;
	data->ret++;
}
