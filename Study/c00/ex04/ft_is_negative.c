/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uviana-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 15:55:44 by uviana-a          #+#    #+#             */
/*   Updated: 2023/03/09 16:39:26 by uviana-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void ft_is_negative(int n){

    if(n > 0 || n == 0){
        printf("P\n");
    };

    if(n < 0){
        printf("N\n");
    };
}