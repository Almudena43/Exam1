/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpyE.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almadrid <almadrid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 14:47:18 by almadrid          #+#    #+#             */
/*   Updated: 2022/04/06 19:37:36 by almadrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	i;

	count = 0;
	while (src[count] != '\0')
		++count;
	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (count);
}

int	main(void)
{
	char	dest[5];
	char	dest0[5];
	char src[] = "abcdefg";

	printf("%d, %s\n", ft_strlcpy(dest, src, 0), dest);
	printf("%lu, %s\n", strlcpy(dest0, src, 0), dest0);

	return(0);
}

