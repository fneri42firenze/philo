/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fneri <fneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:35:32 by fneri             #+#    #+#             */
/*   Updated: 2023/10/11 22:24:35 by fneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	src_len = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	if (size == 0)
	{
		return (src_len);
	}
	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}
/*int main()
{
	char src[] = "ciao";
	char dest[] = "co";
	printf("%ld", ft_strlcpy(dest, src, 4));
	return (0);
}*/

/*La funzione strlcpy copia fino a size - 1 caratteri 
dalla stringa di origine src 
alla stringa di destinazione dst, garantendo che la stringa di destinazione 
sia terminata da un carattere null ('\0'). 
Se la stringa di origine src è più lunga di size - 1, 
verranno copiati solo i primi size - 1 caratteri, 
e la stringa di destinazione sarà comunque terminata da '\0'.*/
