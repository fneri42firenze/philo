/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fneri <fneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:35:11 by fneri             #+#    #+#             */
/*   Updated: 2023/10/16 17:47:42 by fneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	else
	{
		while (i < n)
		{
			*((char *)dest + i) = *((char *)src + i);
			i++;
		}
	}
	return (dest);
}
/*int main()
{
	char src[50] = "ciaoooo";
	char dest[50];
	ft_memcpy(dest, src, ft_strlen(src) + 1);
	printf("Copied string : %s\n", dest);
	return (0);
}*/
/*
All'interno del ciclo, 
*((char *)dest + i) accede 
al byte in dest all'indice i, 
e *((char *)src + i) accede 
al byte in src all'indice i. 
Questi byte vengono copiati 
dalla sorgente alla destinazione.

Alla fine di ogni iterazione, i viene incrementato 
per avanzare nella sorgente e nella destinazione.

La funzione restituisce infine il puntatore dest 
dopo aver completato la copia dei dati.
*/
