#include<stdio.h>

int rotationNumber(int arr[], int n){
    int first = 0;
    int last = n-1;
    int mid;
    while(first <= last){
        if(first + 1 == last)return (arr[last]>arr[first])?first:last;
        mid = (first + last)/2;
        if(arr[mid] < arr[last])last = mid;
        else if(arr[mid] >  arr[first])first = mid;
        // printf("arr[mid]: %d\n",arr[mid]);
        // printf("arr[first]: %d\n",arr[first]);
        // printf("arr[last]: %d\n",arr[last]);
    }
return mid;
}


int main(){
    int arr[] = {11,12,13,14,15,3,4,5,6,7,8,9,10};
    int n = (sizeof(arr))/sizeof(arr[0]);
    int k = rotationNumber(arr,n);
    printf("1st ELEMENT  = %d\n",arr[k]);
return 0;
}