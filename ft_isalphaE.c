/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalphaE.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almadrid <almadrid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:42:26 by almadrid          #+#    #+#             */
/*   Updated: 2022/04/06 19:45:08 by almadrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(char *str)
{
	while (*str != '\0')
	{
		if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

int	main(void)
{
	printf("%d\n", ft_isalpha("abADFcdegz"));
	printf("%d\n\n", ft_isalpha(""));

	printf("%d\n", ft_isalpha("AabVc100degz"));
	printf("%d\n", ft_isalpha("ASbc^"));
	printf("%d\n", ft_isalpha("1abc\ndegz"));
	printf("%d\n", ft_isalpha("012"));
}
