#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool isPalindrome(char str[])
{
	int s=0,e=strlen(str)-1;

	while(s<=e)
	{
		if(str[s]!=str[e])
			return false;

		s++;
		e--;
	}

	return true;
}

int main()
{
	char str[]="niitin";

	if(isPalindrome(str))
	printf("It is a palindrome");
	
	else
	printf("Not a palindrome");
}