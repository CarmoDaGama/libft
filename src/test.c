/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgama <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:42:40 by cgama             #+#    #+#             */
/*   Updated: 2024/11/15 15:42:43 by cgama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int    main(void)
{
    char	*str = "Hello World!";
    t_list    *list;
    list = ft_lstnew(str);
    list->next = ft_lstnew("Hello World!0");
    list->next->next = ft_lstnew("Hello World!1");
    list->next->next->next = ft_lstnew("Hello World!3");
    if (!list)
        return (1);
    while (list)
    {
        ft_putstr_fd(list->content, 1);
        ft_putstr_fd("\n", 1);
        list = list->next;
    }
    ft_printf("Hello World!\n%s\n", get_next_line(open(".gitignore", O_RDONLY)));
    ft_free_collector();
    return (0);
}