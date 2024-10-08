/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fneri <fneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 19:16:20 by fneri             #+#    #+#             */
/*   Updated: 2023/10/13 22:30:33 by fneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
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
    printf("%s\n",(char *) ft_lstlast(new)->content);
    return (0);
}*/
