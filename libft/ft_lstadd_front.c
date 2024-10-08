/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filippomartinoneri <filippomartinoneri@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 18:56:21 by fneri             #+#    #+#             */
/*   Updated: 2023/10/15 20:39:08 by filippomart      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst)
	{
		new->next = *lst;
		*lst = new;
	}
	else
		*lst = new;
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
	printf("%s\n", (char *) new->content);
	printf("%s\n", (char *) new->next->content);
	printf("%s\n", (char *) new->next->next->content);
	return (0);
}*/