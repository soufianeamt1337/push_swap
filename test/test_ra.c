/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ra.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:12:41 by samajat           #+#    #+#             */
/*   Updated: 2022/02/10 16:32:31 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int main ()
{
    int a[3] = {1, 2, 3};
    int i;
    int n;

    i = 1;
    while (i < 3)
    {
        n = a[i];
        a[i] = a[i - 1];
        a[i - 1] = n;
        i++;
    }
    i = 0;
    while (i < 3)
    {
        printf ("%d\n", a[i]);
        i++;
    }   
}