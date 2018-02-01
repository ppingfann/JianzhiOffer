#include<stdio.h>

int main()
{
	void ReplaceBlank(char string[], int length);
	char testString[] = "we are happy.";
	printf("%s\n",testString);
	ReplaceBlank(testString, 20);
	printf("%s\n",testString);
}

void ReplaceBlank(char string[], int length)
{
	if(string == NULL || length <= 0){
		return;
	}

	int originalLength = 0;
	int i = 0;

	int indexOfOriginal = originalLength;

	while(indexOfOriginal <= 20){
		if(string[indexOfOriginal] == ' '){
			string[indexOfOriginal++] = '%';
			string[indexOfOriginal++] = '2';
			string[indexOfOriginal++] = '0';
		}else{
			indexOfOriginal++;
		}

	}
}
