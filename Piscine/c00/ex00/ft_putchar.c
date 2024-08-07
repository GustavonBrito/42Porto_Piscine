/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <uviana-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 13:13:19 by uviana-a          #+#    #+#             */
/*   Updated: 2023/03/12 22:06:27 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

#ifdef _WIN32
#include <io.h>
#define access _access

#else
#include <unistd.h>
#endif

void ft_putchar(char c)
{
	write(1, &c, 1);
}
