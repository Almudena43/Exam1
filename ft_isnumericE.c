/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumericE.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almadrid <almadrid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:46:00 by almadrid          #+#    #+#             */
/*   Updated: 2022/04/06 19:49:11 by almadrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isnumeric(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

int	main(void)
{
	printf("%d\n", ft_isnumeric("01928"));
	printf("%d\n\n", ft_isnumeric(""));

	printf("%d\n", ft_isnumeric("012*$"));
	printf("%d\n", ft_isnumeric("013_\n"));
	printf("%d\n", ft_isnumeric("abcde"));
	printf("%d\n", ft_isnumeric(" "));
}
