/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 15:55:44 by uviana-a          #+#    #+#             */
/*   Updated: 2023/03/09 16:31:27 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef _WIN32
#include <io.h>
#define access _access

#else
#include <unistd.h>
#endif

void ft_print_alphabet(void);

int main(void)

{
	ft_print_alphabet();
}
