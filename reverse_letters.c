/* Documentation 
Name          : Anusree Mohan
Date          : 27-11-24 
Title         : Reverse words in a string
Sample input  : hello world
Sample output : olleh dlrow
*/

#include <stdio.h>
#include <string.h>

void reverse_words(char *str) {
	char buffer[50];
	int i = 0,j = 0;
	while(str[i] != '\0') {
		buffer[j] = str[i];
		if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i+1] == '\0') {
			int start = i - j;
			int end = (str[i+1] == '\0') ? j : j - 1;
		
			// store the word back to string in reverse order
			while(end >= 0) {
				str[start++] = buffer[end--];
			}
			j = -1;
		}
		i++;
		j++;
	}
			
}

int main() {
	char str[50];		// "hello dear world";
	printf("input : ");
	scanf("%[^\n]",str);
	reverse_words(str);
	printf("%s\n",str);

    return 0;
}


