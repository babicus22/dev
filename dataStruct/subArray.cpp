#include<iostream>

void printSubArrays(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            //std::cout<<"("<<i<<","<<j<<")"<<" ";
            for(int k=i; k<=j; k++){
                std::cout<<arr[k]<<", ";
            }
            std::cout<<std::endl;
        }
    }
}
int main(){
    int arr[]={10,20,30,40,50,60};
    int n=sizeof(arr)/sizeof(int);
    printSubArrays(arr,n);
    return 0;
}