/*
1.	Write a program to construct the Pascal triangle with the given integer n.
Ex:
______________________________________
| Input: 3                           |
| Output:                            |
| 1                                  |
| 1 1                                |
| 1 2 1                              |
| 1 3 3 1                            |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex1(int n){
	//Your codes here
    int i,k,count=1;
   for(i=0;i<n+1;i++)
	{
		for(k=0;k<=i;k++)
		{
			if(k==0 || i==0)
	           {
	              count=1;
	           }else
		 count=count * (i-k+1)/k;
		 printf("%d ",count);
		}
		 printf("\n");
	    }
	}


int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	Ex1(testcase);
	return 0;
}
