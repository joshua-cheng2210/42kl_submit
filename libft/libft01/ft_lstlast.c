/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocheng <jocheng@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 17:06:28 by jocheng           #+#    #+#             */
/*   Updated: 2022/06/19 22:24:24 by jocheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*testing;
	t_list	*last_node;

	if (!lst)
		return (NULL);
	testing = lst;
	while (testing != NULL)
	{
		last_node = testing;
		testing = testing->next;
	}
	return (last_node);
}
