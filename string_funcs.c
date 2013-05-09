#include <stdio.h>
#include <string.h>

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

int sub_string()
{
    char *str = "SC nod to Kudankulam nuclear plant";
    char *substr = "nkulu";
    int sublen = 0, i, found;

    while(*substr)
    {
        sublen++;
        substr++;
    }    
  
    substr = substr - sublen;
   while(*str)
    {
        found = 0;
        for(i=0;i<sublen; i++)
        {
            if(*str == *substr)
                found++;
            if(found == sublen)
            {
                printf("\nfound\n");
                return 0;
            }
            *str++;
            *substr++;
        }

        substr = substr - found;
        str = str - (sublen -1);
    }
     printf("\nsub string not found\n");
     return 0;
}

int remove_repetitive_chars()
{
	int strlength = 0, i,j;
	j = 0;
	char str[] = "veeennasharaadaa";
	char dst[20];
	while(str[strlength] != '\0')
		strlength++;
	printf("\nstring length = %d\n", strlength);	
	for(i =0; i<strlength; i++)
	{
		dst[j] = str[i];
		if(str[i] == str[i+1])
		{
			i = i+1;
		}
		j++;

	}
	dst[j] = '\0';
	printf("\noutput string is %s\n", dst); 

	return 0;
	
}

int main()
{
    int option;

    printf(" \n----------- Enter option ------------ \n To reverse_words_instring - 1\n strstr - 2\n Remove consecutively occurring repetitive chars in a string - 3\n");
    printf("----------------------------------------\n");	  
    scanf("%d",&option);
    switch(option)
    {
        case 1:
            reverse_word_instring();
            break;
        case 2:
            sub_string();
            break;
	case 3: 
		remove_repetitive_chars();
		break;
        
        default : break;
	}
    return 0;
}


