/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtozzi-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 12:02:25 by mtozzi-b          #+#    #+#             */
/*   Updated: 2023/12/02 03:12:46 by mtozzi-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)

{
	char i;

	i = 'z';
	while (i > 'a')
    {
	ft_putchar(i);
	i--;
    }
}
