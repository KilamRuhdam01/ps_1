/*! 
* \author Madhur Malik
* \version 1.0
* \date Oct 13 2020
*/

#include<stdio.h>
#include<stdlib.h>

/* print_arr(int Arr[][], int i);
int even_nos(int Arr[][], int i);
void per_sq(int Arr[][], int i);
void indl_prime(int Arr[][], int i);
void  max_min(int Arr[][], int i);

void print_arr(int Arr[][],int i){
    int k,j =0;
    for (k = 0; k <= i; k++)
    {
        for ( j = 0; j <=i; j++)
        {
            printf("%d  ", Arr[k][j] );
        }
        printf("\n");
        
    }

    
}
*/
int main()
{
    int i,j,k = 0;  //ele- number of rows and columns

    printf("Enter the number of rows and columns you want in the matrix.  ");
    scanf( "%d", &k);
    int ele = k-1;
    int Arr[(ele)][(ele)];  //Initialise the array

    for (i = 0; i <= ele; ++i)
    {
        for ( j = i; j <= ele; ++j)
        {
            printf("Enter Arr[(%d,%d] element ", (i+1), (j+1) );
            scanf("%d ", &Arr[i][j]);
        }
        
    }
   
    k=0;
    j=0;

    for ( k = 0; k <= ele; k++)
    {
        for ( j = 0; j <=ele; j++)
        {
            printf("%d  ", Arr[k][j] );
        }
        printf("\n");
        
    }
    k=0;
    j=0;
    i=0;

    for ( k = 0; k <= ele; k++)
    {
        for ( j = k; j <=ele; j++)
        {
            if (Arr[k][j]%2 == 0)
            {
                i++;
            }
            
        }
        
    }
    printf("\n \n Number of Even Numbers in the array is : %d \n", i);
    return 0;
}


