/*
4. Input an array of m x n. Provide the following functions:
	a.	Insert one row
	b.	Remove one row
	c.	Insert one column
	d.	Remove one column
Ex:
____________________________________________________________________
| Input: 5(row) 4(col) 1(choice) 2(location) 1 2 3 4 (insert array) |
| 10 21 12 53 64 53 86 72 68 99 10 11 12 13 14 15 16 17 18 19       |
| Output:                                                           |
| 10 21 12 53                                                       |
| 64 53 86 72                                                       |
| 1 2 3 4                                                           |
| 68 99 10 11                                                       |
| 12 13 14 15                                                       |
| 16 17 18 19                                                       |
|___________________________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

void Array2Dconverter(int arr[], int a[SIZE][SIZE], int m, int n)
{
	int row, column;
	int counter = 0;
	//Convert 1D array to 2D array
	for (row = 0; row <= (m - 1); row ++){
		for (column = 0; column <= (n - 1); column ++){
			a[row][column] = arr[counter];
			counter++;
		}
	}
}

void printArray(int a[SIZE][SIZE], int m, int n)
{
	int row, column;

	for (row = 0; row <= (m - 1); row ++){
		for (column = 0; column <= (n - 1); column ++){
			printf("%d ", a[row][column]);
		}
		printf("\n");
	}
}

void insertRow(int arr[], int a[SIZE][SIZE],int rowIndex, int m, int n){
	//Your codes here
	
}

void removeRow(int a[SIZE][SIZE], int rowIndex, int m, int n){
	//Your codes here
	
}

void insertCol(int arr[], int a[SIZE][SIZE],int colIndex, int m, int n){
	//Your codes here
	
}

void removeCol(int a[SIZE][SIZE], int colIndex, int m, int n){
	//Your codes here
	
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int row = atoi(argv[1]);
	int col = atoi(argv[2]);
	int choice = atoi(argv[3]);
	/* choice values:
	1 for Insert one row
	2 for Remove one row
	3 for Insert one column
	4 for Remove one column 
	*/
	int loc = atoi(argv[4]); //location of inserting/removing row/column
	int a[SIZE][SIZE];
	if(choice == 2 || choice == 4){
		argc-=5;
		int testcase[argc],i;
		for(i=0; i<argc;i++){
			testcase[i] = atoi(argv[i+5]);
		}
		Array2Dconverter(testcase,a,row,col);
		if(choice == 2)
			removeRow(a,loc,row,col);
		else
			removeCol(a,loc,row,col);

	}
	else if(choice == 1){
		int in_row[col],column;
		for (column = 0; column < col; column ++){
			in_row[column]= atoi(argv[column+5]);
		}
		argc-=5;
		argc-=col;
		int testcase[argc],i;
		for(i=0; i<argc;i++){
			testcase[i] = atoi(argv[i+5+col]);
		}
		Array2Dconverter(testcase,a,row,col);
		insertRow(in_row,a,loc,row,col);
	}
	else if(choice == 3){
		int in_col[row],r;
		for (r = 0; r < row; r ++){
			in_col[r]= atoi(argv[r+5]);
		}
		argc-=5;
		argc-=row;
		int testcase[argc],i;
		for(i=0; i<argc;i++){
			testcase[i] = atoi(argv[i+5+row]);
		}
		Array2Dconverter(testcase,a,row,col);
		insertCol(in_col,a,loc,row,col);
	}
	else
		printf("Invalid option!");

	return 0;
}