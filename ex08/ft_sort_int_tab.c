/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfanucch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:33:54 by dfanucch          #+#    #+#             */
/*   Updated: 2022/07/16 15:33:54 by dfanucch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	*pntr;
	int	i;
	int	j;
	int	aux;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		pntr = tab + 1;
		while (j < size)
		{
			if (*tab > *pntr)
			{
				aux = *tab;
				*tab = *pntr;
				*pntr = aux;
			}
			j++;
			pntr++;
		}
		i++;
		tab++;
	}
}
