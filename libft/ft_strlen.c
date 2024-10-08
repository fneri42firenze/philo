/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fneri <fneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:35:36 by fneri             #+#    #+#             */
/*   Updated: 2023/10/12 17:28:04 by fneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	conta;

	conta = 0;
	while (str[conta] != '\0')
	{
		conta++;
	}
	return (conta);
}
/*int main()
{
	char str[] = "ciao biella";
	printf("%d\n", ft_strlen(str));
	return (0);
}*/