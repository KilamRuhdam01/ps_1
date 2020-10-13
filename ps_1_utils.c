/* Includes the functions used in ps_1.c */

#include <stdio.h>
#include<stdlib.h>

void print_arr(int Arr[][], int i);
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
