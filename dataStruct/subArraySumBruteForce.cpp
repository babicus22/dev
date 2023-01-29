#include<iostream>

int largestSubArraySum(int arr[], int n);
int largestSubArraySum(int arr[], int n){
    int largest_sum{};

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int subArraySum{};
            for(int k=i; k<=j; k++){
                subArraySum+=arr[k];
            }
            if(largest_sum<subArraySum){
                largest_sum=subArraySum;
            }
        }
    }
    return largest_sum;
}

//find out the largest sum of subarray
//Brut force


int main(){
    //Array containing
    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int n= sizeof(arr)/sizeof(int);
    std::cout<<largestSubArraySum(arr,n)<<std::endl;
    return 0;
}