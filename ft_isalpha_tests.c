/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_tests.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tissad <issad.tahar@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:33:50 by tissad            #+#    #+#             */
/*   Updated: 2023/11/15 15:01:43 by tissad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "libft_tests.h"

int	main(void)
{
	ft_print_res(ft_isalpha(INT_MIN));
	ft_print_res(ft_isalpha(CHAR_MIN));
	ft_print_res(ft_isalpha('A'));
	ft_print_res(ft_isalpha('H'));
	ft_print_res(ft_isalpha('Z'));
	ft_print_res(ft_isalpha('a'));
	ft_print_res(ft_isalpha('h'));
	ft_print_res(ft_isalpha('z'));
	ft_print_res(ft_isalpha(CHAR_MAX));
	ft_print_res(ft_isalpha(INT_MAX));
	return (0);
}
