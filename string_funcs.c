#include <stdio.h>
#include <string.h>
int main()
{
    int option;

    printf(" \nEnter option \n\tTo reverse_words_instring - 1\n");
    scanf("%d",&option);
    switch(option)
    {
        case 1:
            reverse_word_instring();
            break;
        
        default : break;
	}
    return 0;
}

int reverse_word_instring()
{
    char str[] = "I have a GitHub repository";
	int i=0, j=0, len =0, k = 0, l, start_loc = 0;

	while(str[len] != '\0')
	{
		l = 0; 
		start_loc = len;
		while((str[len] != ' ') && (str[len] != '\0'))
		{
			l++;
			len++;
		}
		i= len;
		k = (i+start_loc)/2;
		i = i-1;
		for(j= start_loc; j<k; j++)
		{
			str[j] = str[j] + str[i];
			str[i] = str[j] - str[i];
			str[j] = str[j] - str[i];
			i--;
		}
		len++;

	}
	printf("\nreverse string is :--%s\n", str);
	return 0;	
}
