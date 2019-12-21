#include "txt.h"



//ab



//standard input  "bc"

//c= a

//s= a

//s=abc

int EOFFlag;

// returns -1 if EOF is reached
int Getline(char s[])
{
	if(!EOFFlag)
	{
		char c = getchar();
		int counter = 0;

		while(c != '\n' && c != EOF)
		{
			*(s++) = c;
			c = getchar();
			counter++;
		}

		*s = '\0';

		EOFFlag = (c == EOF) ? 1 : 0;

		return counter;
	}
	else
	{
		return -1;	
	}
}

int getword(char w[])
{
	if(!EOFFlag)
	{
		char c = getchar();
		int counter = 0;
		while(c != '\n' && c != '\t' && c != ' ' && c != EOF)
		{
			*(w++) = c;
			c = getchar();
			counter++;
		}

		*w = '\0';

		EOFFlag = (c == EOF) ? 1 : 0;
		return counter;
	}

	else
	{
		return -1;
	}
}

int substring(char * str1, char * str2) 
{
	int sizeStr1 = sizeOfString(str1);
	int sizeStr2 = sizeOfString(str2);
	if(sizeStr2>sizeStr1)
	{
		return 0;
	}
	else
	{
		int i = 0;
		int j = 0;
		while(*(str1+j+i) && *(str2+i))// aagabahj , aba
		{
			if(*(str1+i+j) != *(str2+i))
			{
				j++;
				i=0;
			}
			else
			{
				i++;
			}
		}
		if(*(str2+i) == '\0')
		{
			return 1;
		}
		else
		{
			return 0;
		}
		
		
	}
	
}

int sizeOfString(char* str)
{
	int i = 0;
	while(*(str+i))
	{
		i++;
	}
	return i;
	
}

int similar(const char* s, const char* t, int n)
{

	int skips_used = 0;

	while(*s && *t)
	{
		if(*t != *s)//unequal s
		{
			if(skips_used == n) //max number of skips reached
			{
				break;
			}
			else//more skips left
			{
				++skips_used;
			}
		}
		else//equal characters
		{
			++t;
		}

		++s;
	}

	if(!(*s) && !(*t))//end of both string reached
	{
		return skips_used == n;
	}
	else if(*s)//end of s string not reached
	{
		if(skips_used < n)//still more skips to use
		{
			//advance s string using skips
			while(*s && skips_used < n)
			{
				++s;
				++skips_used;
			}
			return !(*s) && skips_used == n;
		}
		else //max number of skips reached
		{
			return 0;
		}
	}
	else //s string done before shorter one
	{
		return 0;
	}

}

void print_lines(char *str)
{
	char line[LINE];

	int numChars;

	numChars = Getline(line);
		
	while(numChars != -1)
	{
		if(substring(line,str))
		{
			printf("%s\n",line);
		}

		numChars = Getline(line);
	}	
}

void print_similar_words(char *str)
{
	char word[WORD];

	int numChars;

	numChars = getword(word);
		
	while(numChars != -1)
	{
		if(similar(word,str,1) || similar(word,str,0))
		{
			printf("%s\n",word);
		}

		numChars = getword(word);
	}	
}


/*
int main()
{

	char c1[] = "abbcabb";
	char c2[] = "bcd";
	printf("%d\n",substring(c1,"abbcabb")); // true
	printf("%d\n",substring(c1,"bb")); // true
	printf("%d\n",substring(c1,"")); // true
	printf("%d\n",substring(c1,"bcd")); // false
	printf("%d\n",substring(c1,"bba")); // false
	printf("%d\n",substring(c1,"abbcabbd")); // false 
	return 0;
}

*/
