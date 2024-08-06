/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <uviana-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 13:13:19 by uviana-a          #+#    #+#             */
/*   Updated: 2023/03/09 16:20:14 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef _WIN32
#include <io.h>
#define access _access

#else
#include <unistd.h>
#endif

void ft_putchar(char c);

int main(void)
{
	ft_putchar('u');
}
