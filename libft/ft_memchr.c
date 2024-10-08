/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fneri <fneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:35:04 by fneri             #+#    #+#             */
/*   Updated: 2023/10/11 20:24:45 by fneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t num)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	while (i < num)
	{
		if (str[i] == c)
		{
			return (str + i);
		}
		i++;
	}
	return (NULL);
}
/*int main()
{
	char str[] = "Hello world";
	char *p;
	p = ft_memchr(str, 'w', 11);
	printf("%s", p);
	return (0);
}*/