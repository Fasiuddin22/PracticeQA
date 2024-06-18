#include<stdio.h>

void plus_minus(int* arr,int arr_count){
    int i;
    float pos = 0, zero = 0, neg = 0;
    for ( i = 0; i < arr_count; i++)
    {
        if(arr[i] < 0){
            neg++;
        }
        if(arr[i] == 0){
            zero++;
        }
        if(arr[i] > 0){
            pos++;
        }
    }
    float pos_ratio = pos/arr_count;
    float neg_ratio = neg/arr_count;
    float zero_ratio = zero/arr_count;

    printf("%.6f",pos_ratio);
    printf("%.6f",neg_ratio);
    printf("%.6f",zero_ratio);

}

void main(){
    int arr[] = {-2,-1,0,1,2} ;
    int arr_count = 5;
    plus_minus(arr,arr_count);
}