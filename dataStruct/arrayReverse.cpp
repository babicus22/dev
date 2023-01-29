#include<iostream>
void reverseArray(int arr[], int n);
void reverseArray(int arr[], int n){
    int s=0;
    int e=n-1;
    while(s<e){
        int temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        s+=1;
        e-=1;
    }

}

int main(){
    int arr[]={10,20,30,45,60,80,90};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0; i<n; i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
    reverseArray(arr,n);
    for(int i=0; i<n; i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
    return 0;
}