#include<iostream>

int max_subarray_sum(int arr[], int n);
int max_subarray_sum(int arr[], int n){
    int cs =0;
    int largest =0;
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
    int arr[]={5,0,-1,0,1,2,-1};
    int n = sizeof(arr)/sizeof(int);
    std::cout<<"The maximum subarray sum is: "<<max_subarray_sum(arr,n)<<std::endl;
    return 0;
}