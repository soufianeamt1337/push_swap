/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 12:18:53 by samajat           #+#    #+#             */
/*   Updated: 2022/02/19 14:43:09 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	do_rr(t_list **stack_A, t_list **stack_B)
{
	do_ra(stack_A);
	do_rb(stack_B);
	write (1, "rr\n", 3);
	return (1);
}
