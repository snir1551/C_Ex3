#include "txt.h"

int EOFFlag;

int main() {
	EOFFlag = 0;
	char userString[WORD];
	char choose = 'a';
	int i = 0;
	char numOfChar = getchar();
	while(numOfChar != ' ')
	{
		userString[i] = numOfChar;
		i++;
		numOfChar = getchar();
	}
	userString[i] = '\0';
	
	
	choose = getchar();
	switch(choose)
	{
		case 'a':
			print_lines(userString);
			break;
		case 'b':
			print_similar_words(userString);
			break;

		default: printf("%c , %s",choose,userString);
	}
	//print_lines(userString);
	//print_similar_words(userString);

	return 0;
}
