#include<iostream>

int largestSubArraySum2(int arr[], int n);
int largestSubArraySum2(int arr[], int n){
    int prefix[100] = {0};
    prefix[0] = arr[0];
    for(int i=1; i<n; i++){
        prefix[i]=prefix[i-1]+arr[i];
    }
    int largest_sum{0};
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int subArraySum = 0;
            if(i>0){
            subArraySum = prefix[j]-prefix[i-1];
                } else {
                    subArraySum = prefix[j];
                }
                if(subArraySum>largest_sum){
                    largest_sum=subArraySum;
                }
        }
    }
    return largest_sum;
}
int main(){
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n=sizeof(arr)/sizeof(int);
    std::cout<<"The largest sum is: "<<largestSubArraySum2(arr,n)<<std::endl;
    return 0;
}