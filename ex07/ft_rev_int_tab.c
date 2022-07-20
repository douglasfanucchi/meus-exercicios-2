/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfanucch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 14:03:25 by dfanucch          #+#    #+#             */
/*   Updated: 2022/07/16 14:03:26 by dfanucch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	aux;
	int	*ptr1;
	int	*ptr2;

	ptr1 = tab;
	i = 0;
	while (i < size / 2)
	{
		aux = *ptr1;
		ptr2 = tab + (size - 1 - i);
		*ptr1 = *ptr2;
		*ptr2 = aux;
		ptr1++;
		i++;
	}
}
