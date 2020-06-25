/*Complete the following program fragment such that it reads from the keyboard the elements of 
a matrix of size n*n consisting of n rows and n columns.Your program should also print on
the screen the elements on and above the main diagonal of the matrix as shown in the following example.

Sample input:
4
1 2 3 4 
5 6 7 8
9 1 2 3
4 5 6 7

Sample output:
1 2 3 4 
  6 7 8
    2 3
      7
      */

#include <stdio.h>
# include <stdlib.h>//included because of the matrix 

int main(){
    int n;
    scanf("%d", &n); //we want an n by n matrix 
    int matrix[n][n];

//the below statement scans for elements of a n by n matrix
    for (int i =0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &matrix[i][j]);
        }

    }

    for (int i = 0; i < n; i++){
        for (int j =0; j < n; j++){
            if (j >= i){
                printf("%d ", matrix[i][j]);
            }
            else {
                printf("  "); //the places that are empty in the output. 
            }
        }
        printf("\n");
    }

/*
If we have the following matrix:

   __________i__
   1 2 3 4 | 0
   5 6 7 8 | 1
   9 1 2 3 | 2
   4 5 6 7 | 3
   -----------
j |0 1 2 3  

the i and j represent the current row and the current column respectively.
the main diagonal is the one that goes from the top-left to the bottom right and everything above it.
if you notice the j is always either equal or greater than i for this scenario.
*/
    




    return 0;
}