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
		if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
			for(int k = i-j; k < i; k++) {
				str[k] = buffer[--j];
			}
			j--;
		}
		if(str[i+1] == '\0') {
			for(int k = i - j; k <= i; k++) {
				str[k] = buffer[j--];
			}
			break;
		}
		i++;
		j++;
	}
			
}

int main() {
	char str[50];  // "hello dear world";
	printf("input : ");
	scanf("%[^\n]",str);
	reverse_words(str);
	printf("%s\n",str);

    return 0;
}


