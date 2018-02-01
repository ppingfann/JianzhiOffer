#include<stdio.h>

int main()
{
	void ReplaceBlank(char string[], int length);
	char testString[] = "we are happy.";
	printf("%s\n",testString);
	printf("%c\n",testString[13]);
	ReplaceBlank(testString, 20);
	printf("%s\n",testString);
}

void ReplaceBlank(char string[], int length)
{
	if(string == NULL || length <= 0){
		return;
	}

	int originalLength = 0;
	int numOfBlank = 0;
	int i = 0;
	int newLength;

	while(string[i] != '\0'){
		originalLength++;
		
		if(string[i] == ' '){
			numOfBlank++;
		}

		i++;
	}

	newLength = originalLength + numOfBlank * 2;
	printf("%d\n",originalLength);
	printf("%d\n",newLength);

	int indexOfOriginal = originalLength;
	int indexOfNew = newLength;

	while(indexOfOriginal >= 0 && indexOfNew > indexOfOriginal){
		if(string[indexOfOriginal] == ' '){
			string[indexOfNew--] = '0';
			string[indexOfNew--] = '2';
			string[indexOfNew--] = '%';
		}else{
			string[indexOfNew--] = string[indexOfOriginal];
		}
		indexOfOriginal--;
	}
}
