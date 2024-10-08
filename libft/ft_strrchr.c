/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fneri <fneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:35:47 by fneri             #+#    #+#             */
/*   Updated: 2023/10/16 14:39:57 by fneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s) + 1;
	while (i--)
		if (*(s + i) == (char ) c)
			return ((char *) s + i);
	return (0);
}

/*#include <stdio.h>
int main()
{
    char str[] = "ciao biella";
    char c = 'i';
    char *p;
    
    p = ft_strrchr(str, c);
    printf("%s\n", p);
    return 0;
}
*/
