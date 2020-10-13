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
    scanf( " %d", &k);
    int ele = k-1;
    int Arr[ele][ele];  //Initialise the array

    /* input the elements to the array*/

    for (i = 0; i <= ele; ++i)
    {
        for ( j = 0; j <= ele; ++j)
        {
            printf("Enter Arr[(%d,%d] element ", (i+1), (j+1) );
            scanf("%d ", &Arr[i][j]);
        }
        
    }

    /* Code to print the elements*/

    k=0;  //index variables
    j=0;

    for ( k = 0; k <= ele; k++)
    {
        for ( j = 0; j <=ele; j++)
        {
            printf("%d  ", Arr[k][j] );
        }
        printf("\n");
        
    }

    // code to check the number of even numbers */

    k=0;
    j=0;
    i=0;

    for ( k = 0; k <= ele; k++)
    {
        for ( j = k; j <=ele; j++)
        {
            if (Arr[k][j]%2 == 0) //check whether the numebr is even
            {
                i++;   //increase the count if the number is even
            }
            
        }
        
    }
    printf("\n \n Number of Even Numbers in the array is : %d \n", i);

    /*! code to find the perfect squares if any across both diagonals */
    
    printf("Checking the diagonals for perfect squares \n");
    i,j,k =0;
    int l,m,n,p = 0;

    for (i = 0; i <=ele ; ++i)
    {
        
        k = Arr[i][i];  //main diagonal element
        p=  Arr[i][ele-i-1];  //secondary diagonal element
        for (l=0; l<k;l++)
        {
            if (l*l == k)  //checking for perfect squares
            {
                printf(" \n The perfect squares in main diagonal are : %d ", k);
                n=1;     //counter to check whether perfect squares exist or not
            }
            else if (l*l==p)
            {
                printf("\n The perfect squares in the other diagonal are : %d ", p);
                n=1;
            }
            
        }
    }

    if (n==0)
    {
        printf("No Number statisfies the criteria");
    }
    
    /*! code to find the global maxima and minima in the matrix */

    i,j,k=0;
    i= Arr[0][0];
    l = Arr [0][0];
    for ( k = 0; k <= ele; k++)
    {
        for ( j = 0; j <=ele; j++)
        {
            
            if ((Arr[k][j]) >= i ) //check whether the number is greater than the first element
            {
               i= Arr[k][j];  //change the  number to be checked against
            }
            if (Arr[k][j]<=j)
            {
                j= Arr[k][j];
            }   
        }
        
    }
    printf(" \n The maximum number in the array is : %d ", i);
    printf(" \n The minimum number in the array is : %d ", j);
    
    return 0;
}


