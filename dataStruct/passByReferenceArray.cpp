#include<iostream>
void printArray(int arr[], int n);
void printArray(int arr[], int n){
    std::cout<<"In function"<<sizeof(arr)<<std::endl;
    arr[0]=100;
    for(int i=0; i<n; i++){
        std::cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);

    printArray(arr, n);
    
    std::cout<<"In main "<<sizeof(arr)<<std::endl;
    for(int i=0; i<n; i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}