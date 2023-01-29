#include<iostream>

int maximum_subarray_sum(int arr[], int n);
int maximum_subarray_sum(int arr[], int n){
    int cs=0;
    int largest=0;
    for(int i=0; i<n; i++){
        cs=cs+arr[i];
        if(cs<0){
            cs=0;
        }
        if(cs>largest){
            largest=cs;
        }
    }
    return largest;
}
int main(){
    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int n=sizeof(arr)/sizeof(int);
    std::cout<<maximum_subarray_sum(arr,n)<<std::endl;
    return 0;
}