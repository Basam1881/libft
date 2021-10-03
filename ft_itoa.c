/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnaji <bnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 22:41:32 by bnaji             #+#    #+#             */
/*   Updated: 2021/10/03 05:02:07 by bnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static char	*is_positive(long n, char *str)
{
	int nb;
	int count;
	int i;

	nb = n;
	count = 0;
	i = 0;
	while (nb != 0)
	{
		nb = nb / 10;
		count++;
	}
	if (!(str = (char *)malloc(sizeof(char) * (count + 1))))
		return (0);
	str[count] = 0;
	nb = n;
	while (count-- >= 0)
	{
		nb = n % 10;
		n = n / 10;
		str[count] = nb + 48;
		// count--;
	}
	return (str);
}

static char *is_negative(long n, char *str)
{
	int nb;
	int count;
	int i;

	n = n * -1;
	nb = n;
	count = 0;
	i = 0;
	while (nb != 0)
	{
		nb = nb / 10;
		count++;
	}
	if (!(str = (char *)malloc(sizeof(char) * (count + 2))))
		return (0);
	str[count + 1] = 0;
	nb = n;
	while (count > 0)
	{
		nb = n % 10;
		n = n / 10;
		str[count] = nb + 48;
		count--;
	}
	str[count] = '-';
	return (str);
}

char *ft_itoa(int n)
{
	char *str;
	long num;

	str = 0;
	num = (long) n;
	if (n == 0)
	{
		if (!(str = (char *)malloc(sizeof(char) + 1)))
			return (0);
		*str = 48;
	}
	else if (n > 0)
		str = is_positive(num, str);
	else
		str = is_negative(num, str);
	return (str);
}

int main(){
	printf("%s", ft_itoa(-2147483647 -1));
	return (0);
} 
