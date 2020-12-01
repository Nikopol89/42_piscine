/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspazzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 13:55:48 by lspazzin          #+#    #+#             */
/*   Updated: 2020/12/01 13:41:47 by lspazzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int x;
	int y;

	x = *a;
	y = *b;
	*b = x;
	*a = y;
}

int	main(void)
{
	int a;
	int b;

	a = 666;
	b = 999;

	ft_swap(&a, &b);
	printf("a=%d, b=%d", a, b);
}