/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fneri <fneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:34:45 by fneri             #+#    #+#             */
/*   Updated: 2023/10/11 20:08:19 by fneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int a)
{
	if (ft_isalpha (a) || ft_isdigit (a))
		return (1);
	else
		return (0);
}

/*int main()
{
	char a = '*';
	printf("%d", ft_isalnum(a));
	return (0);
}*/