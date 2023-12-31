/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnatanae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:43:28 by cnatanae          #+#    #+#             */
/*   Updated: 2023/10/05 12:44:03 by cnatanae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char *))
{
	int	count;
	int	idx;

	count = 0;
	idx = 0;
	while (tab[idx] != (void *)0)
	{
		if (f(tab[idx]) == 1)
		{
			count++;
		}
		idx++;
	}
	return (count);
}
