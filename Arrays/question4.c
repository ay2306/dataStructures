#include<stdio.h>

int firstElement(int arr[], int n){
    int first = 0;
    int last = n-1;
    int mid;
    while(first <= last){
        if(last - first == 1)return (arr[last]>arr[first])?first:last;
        mid = (first+last)/2;
        if(arr[mid]>=arr[last])first=mid;
        else if(arr[mid]<=arr[last])last=mid;
    }
return mid;
}

int main(){
    int arr[] = {10,11,12,13,14,15,16,17,1,2,3,4,5,6,7,8,9};
    int n = (sizeof(arr))/(sizeof(arr[0]));
    const int first = firstElement(arr,n);
    int i = first;
    int j = first - 1;
    int value = 20;
    while(i != j){
        if(arr[i] + arr[j] == value){
            printf("Yes arr[%d] (%d) + arr[%d] (%d) = %d\n",i,arr[i],j,arr[j],value);
            break;
        }
        if(arr[i] + arr[j] < value){
            ++i;
            if(i >= n)i=0;
        }
        if(arr[i] + arr[j] > value){
            --j;
            if(j < 0)j = n-1;
        }
        if(i == j){
            printf("NOT FOUND\n");
        }
    }
return 0;
}