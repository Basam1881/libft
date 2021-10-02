/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnaji <bnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 13:23:38 by bnaji             #+#    #+#             */
/*   Updated: 2021/10/01 01:35:23 by bnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned char *str1;
	unsigned char *str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2; 
	i = 0;
	if (n == 0)
		return (0);
	while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0' && i < n - 1)
		i++;
	return (str1[i] - str2[i]);
}

// int main(){
//     char s1[] = "HHHHH";
//     char s2[] = "HHHHz";
//     printf("%d\n", ft_strncmp(s1, s2, 5));
//     return (0);
// }