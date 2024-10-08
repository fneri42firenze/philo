/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fneri <fneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:33:12 by fneri             #+#    #+#             */
/*   Updated: 2023/10/11 20:14:49 by fneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*appoggio;

	appoggio = malloc(count * size);
	if (appoggio == NULL)
		return (appoggio);
	ft_bzero(appoggio, size * count);
	return (appoggio);
}
/*int main()
{
	char *str;
	str = ft_calloc(10, sizeof(char));
	printf("%s\n", str);
	return (0);
}*/
/*Viene allocata  una porzione di memoria 
usando la funzione malloc per (count * size) byte. 
Il puntatore a questa memoria viene assegnato alla variabile ptr.

Viene effettuato un controllo per verificare se l'allocazione 
di memoria tramite malloc è riuscita. 
Se malloc restituisce un puntatore NULL, 
significa che non c'è abbastanza memoria disponibile 

Se l'allocazione di memoria ha successo, 
viene utilizzata la funzione ft_bzero 
per inizializzare tutti i byte della memoria allocata a zero. 

La funzione restituisce il puntatore ptr, 
che punta alla memoria allocata con i byte inizializzati a zero.


NB: [CALLOC RESETTA E ALLOCA, MALLOC ALLOCA SOLTANTO]
*/
