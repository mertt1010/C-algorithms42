/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:38:18 by marvin            #+#    #+#             */
/*   Updated: 2025/02/20 13:38:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
void ft_print_alphabet(void)
{
    char c;
    c = 'a';
    while (c <= 'z')
    {
        write(1, &c, 1);
        c++;
    }
}


