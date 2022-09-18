/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egokeri <egokeri@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:45:43 by egokeri           #+#    #+#             */
/*   Updated: 2022/09/18 12:24:54 by egokeri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 1;
	while (sqrt * sqrt <= nb)
	{
		if (sqrt >= 46341)
			return (0);
		else if (sqrt * sqrt == nb)
			return (sqrt);
		sqrt++;
	}
	return (0);
}
