#include<stdio.h>

int my_strlen(char const *str);


int my_char_is_alpha(char c)
{
	if((c >= 'a' && c <='z' ) || (c >= 'A' && c <= 'Z'))
		return 1;
	else
		return 0;
}

int my_str_isalpha ( char const * str) 
{
	int i = 0;
	int len = my_strlen(str);
	if(len ==0)
		return 1;
	while(str[i] != '\0')
	{
		if (my_char_is_alpha(str[i]) != 1)
		{
			return 0;
		}
		i++;
	}
	return 1;
}
