/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_tests.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tissad <issad.tahar@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:18:18 by tissad            #+#    #+#             */
/*   Updated: 2023/11/27 11:10:28 by tissad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TESTS_H

# define LIBFT_TESTS_H

# include <limits.h>
# include <unistd.h>
# include "../libft.h"
/*==========================lstfunctions_utils================================*/
# define MAX 10 /*nb elements dans la liste test*/
void	lst_printone(t_list *lst);
void	lst_print(t_list *lst);
void	lst_del(void *content);
void	*lst_mdifcontent(void *content);
t_list	*lst_create(void (*ft_lstadd)(t_list **, t_list *));
/*==========================print_functions===================================*/
void	ft_print_res(int res, char *nbtest);
void	ft_printstr(char *str);
/*==========================Bonus_tests=======================================*/
int	ft_strtrim_tests(void);
int	ft_lstnew_tests(void);
int	ft_lstadd_front_tests(void);
int	ft_lstmap_tests(void);
#endif
