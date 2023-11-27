/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_tests.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tissad <issad.tahar@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:28:30 by tissad            #+#    #+#             */
/*   Updated: 2023/11/27 15:03:05 by tissad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	ft_lstadd_front_test0(t_list *lst)
{
	t_list	*current;

	current = lst;
	while (current)
	{
		if (current < current->next)
			return (0);
		current = current->next;
	}
	return (1);
}
int	ft_lstadd_front_tests()
{
	t_list *lst;

	ft_printstr("\nft_lstadd_front : ");
	lst = lst_create(ft_lstadd_front);
/*===================================TEST0====================================*/
	ft_print_res(ft_lstadd_front_test0(lst), "T0 :");
/*===================================MEMFREE==================================*/
	ft_lstclear(&lst, lst_del);
	return (0);
}
