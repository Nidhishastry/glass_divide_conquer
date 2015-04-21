//
//  main.c
//  glass_divide_conquer
//
//  Created by Kumar Divya  Rajat on 21/04/15.
//  Copyright (c) 2015 Kumar Divya Rajat. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int a[100],b[50],c[50];
int n,count=0;


void sort() {
    int i,j,temp,count=0;
    for(i = 1; i <= n; i++) {
        b[i] = a[i];
    }
    
    for(j = 1; j <= n; j++) {
        c[j] = a[i];
        i++;
    }
    if( (n) % 2 == 0 ) {
        for(i = 2; i < n+1; ) {
            temp = b[i];
            b[i] = c[i];
            c[i] = temp;
            
            i = i+2;
            count++;
        }
    } else {
        for(i = 2; i < n+1; ) {
            for(j = 1; j < n+1; ) {
                temp = b[i];
                b[i] = c[i];
                c[i] = temp;
                

                i = i+2;
                j = j+2;
                count++;
            }
        }

    }
    
    for(i=1;i<= n ;i++) {
        a[i] = b[i];
    }
    
    
    for(j = 1; j <= n; j++) {
        a[i] = c[j];
        i++;
    }
    for(i = 1;i <= 2 * n ; i++ ) {
        printf("%d\t", a[i]);
    }
    printf("\n\nThe minimum number of steps required to solve the puzzle = %d\n",count);
   
}

int main(int argc, const char * argv[]) {
    int i;
    
    printf("Program to implement divide and conquer\n");
    printf("Enter the number of elements (factors of 2n) \n");
    scanf("%d",&n);
    
    
    for(i=1 ; i <= n  ; i++ ) {
        a[i] = 1 ;
    }
    
    for( i = n + 1 ; i <= 2 * n ; i++ ) {
        a[i] = 0;
    }
    
    for(i = 1;i <= 2 * n ; i++ ) {
        printf("%d\t", a[i]);
    }
    printf("\n");

    sort();
}
