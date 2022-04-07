/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpyE.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almadrid <almadrid@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:38:49 by almadrid          #+#    #+#             */
/*   Updated: 2022/04/06 19:41:37 by almadrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	*src = "hello";
	char	dest[6];
	char	dest0[6];

	printf("%s\n", strcpy(dest, src));
	printf("%s\n\n", dest);

	printf("%s\n", ft_strcpy(dest0, src));
	printf("%s\n", dest0);
}
