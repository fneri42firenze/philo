/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fneri <fneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:33:34 by fneri             #+#    #+#             */
/*   Updated: 2023/10/11 14:01:44 by fneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

/*void my_toupper(unsigned int i, char *c)
{
	*c = ft_toupper(*c);
}
int main()
{
    char s[] = "abcdef";
    ft_striteri(s, &my_toupper);
	printf("%s\n", s);
}*/
