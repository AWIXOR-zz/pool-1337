/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaouassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 13:20:31 by eaouassa          #+#    #+#             */
/*   Updated: 2021/10/13 14:56:31 by eaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int has_space(char c)
{
	if((c>=9 && c<=13) || c==32)
		return (1);
	return (0);
}
int count_words(char *s)
{
	int i = 0;
	int count = 0;

	while(s[i])
	{
		while(s[i] && !has_space(s[i]))
			i++;
		while(has_space(s[i]))
			i++;
		count++;
	}
	return (count);
}
int count_word(char *s)
{
	int i = 0;
	while(s[i] && !has_space(s[i]))
		i++;
	return (i);
}
char *create_word(char *s, char **word)
{
	int i;
	int word_len;

	word_len = count_word(s);
	(*word)= malloc(sizeof(char) * (word_len + 1));
	(*word)[word_len] = 0;
	i = 0;
	while(i < word_len)
		(*word)[i++] = *s++;
	while(has_space(*s))
		s++;
	return (s);
}
char **ft_split(char *str)
{
	char **result;
	int i;
	int words_number;

	while(has_space(*str))
		str++;
	words_number = count_words(str);
	printf("-->%d\n", words_number);
	result = malloc(sizeof(char *) * (words_number + 1));
	result[words_number] = 0;
	i = 0;
	while (i < words_number)
	{
		str = create_word(str, result + i);
		i++;
	}
	return (result);
}
int main()
{
	char *s = " abc de fgh";

	char **strs = ft_split(s);
	
	int i =0;
	while(strs[i])
	{
		printf("%s\n", strs[i]);
		i++;
	}
}
