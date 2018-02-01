#include<stdio.h>
#include<stdbool.h>

int main()
{
	bool Find(int matrix[4][4], int rows, int columns, int number);
	int a[4][4] = {{1,2,8,9},{2,4,9,12},{4,7,10,13},{6,8,11,15}};
	bool result;
	result = Find(a,4,4,5);
	printf("%d",result);
}

bool Find(int matrix[4][4], int rows, int columns, int number)
{
  if(matrix != NULL && rows !=0 && columns !=0){
    int row = 0;
    int column = columns - 1;
    while(row < rows && column >= 0){
      if(matrix[row][column] == number){
	return true;
	break;
      }
      else if(matrix[row][column] < number){
        row++;
      }else{
        column--;
      }
    }
    return false;
  }
}

