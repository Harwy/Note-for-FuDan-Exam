#include<stdio.h>

int Partition(int A[], int left, int right){
    int temp =A[left];
    while(left < right){
        /* code */
        while(left < right && A[right] > temp) right--;
        A[left] = A[right];
        while(left < right && A[left] <= temp) left++;
        A[right] = A[left];        
    }
    A[left] = temp;
    return left;
}
