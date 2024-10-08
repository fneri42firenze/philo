/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fneri <fneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 19:06:59 by fneri             #+#    #+#             */
/*   Updated: 2023/10/13 19:28:44 by fneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*int main()
{
	t_list *new;
	t_list *new1;
	t_list *new2;
	char *str = "Hello";
	char *str1 = "World";
	char *str2 = "!";
	new = ft_lstnew(str);
	new1 = ft_lstnew(str1);
	new2 = ft_lstnew(str2);
	ft_lstadd_front(&new, new1);
	ft_lstadd_front(&new, new2);
	printf("%d\n", ft_lstsize(new));
	return (0);
}*/