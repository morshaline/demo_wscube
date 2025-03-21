#include <bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int low, int high,int key){
while (low<= high){
    int mid = low +(high -low)/2;
    if(arr[mid]==x)
        return mid;
    if(arr[mid]<x)
        low = mid + 1;
    else
        high = mid -1;
}
return -1;

}
int main(void){
int arr[] = {2,3,4,10,40};
int key = 10;
int n = sizeof(arr)/sizeof(arr[0]);
int result = binarysearch(arr,0,n-1,x);
if(result==-1)cout <<"Element is not present in array";
else cout<<"Element is not present in index"<<result;
return 0;
}
