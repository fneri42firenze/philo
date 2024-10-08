/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fneri <fneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:35:15 by fneri             #+#    #+#             */
/*   Updated: 2023/10/11 22:48:23 by fneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*destinazione;
	char	*origine;

	if (src < dest)
	{
		destinazione = (char *)dest;
		origine = (char *)src;
		i = n;
		while (i--)
			destinazione[i] = origine[i];
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}

/*
int main()
{
    char src[] = "spiderman";
    char dest[] = "boh";
    size_t n = 3;

    ft_memmove(dest, src, n);
    printf("src is: %s\n" , src);
    printf("dest is: %s\n" , dest);
}*/
