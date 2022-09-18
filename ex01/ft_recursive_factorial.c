/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egokeri <egokeri@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 13:46:47 by egokeri           #+#    #+#             */
/*   Updated: 2022/09/17 14:01:28 by egokeri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	if (nb > 0)
	{
		result = nb * ft_recursive_factorial(nb - 1);
		return (result);
	}
	else
	{
		return (0);
	}
}
