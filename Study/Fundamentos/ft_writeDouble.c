/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helloworld.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <gustavo>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 16:42:00 by gustavo           #+#    #+#             */
/*   Updated: 2024/07/25 16:42:00 by gustavo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void writeDouble(int valueToDouble)
{
    printf("O valor %d dobrado fica %d", valueToDouble, valueToDouble * 2);
};

void main()
{
    writeDouble(2);
};