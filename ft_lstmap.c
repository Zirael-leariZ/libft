/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 13:18:06 by oishchen          #+#    #+#             */
/*   Updated: 2025/03/22 15:17:58 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*result;

	if (!lst || !f || !del)
		return (NULL);
	result = NULL;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&result, del);
			return (NULL);
		}
		ft_lstadd_back(&result, new);
		lst = lst->next;
	}
	return (result);
}
// int main()
// {
// 	t_list	*head;
// 	t_list	*first_node;
// 	t_list	*second_node;
// 	t_list	*current;
// 	t_list	*result;

// 	head = ft_lstnew("  -4234.4");
// 	first_node = ft_lstnew("  +523rew");
// 	ft_lstadd_back(&head, first_node);
// 	second_node = ft_lstnew(" -0faf");
// 	ft_lstadd_back(&head, second_node);
// 	current = head;

// 	while (current)
// 	{
// 		printf("that is our current node: %s\n", current->content);
// 		current = current->next;
// 	}
// }