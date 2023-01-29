#include<iostream>

void printAllPairs(int arr[], int n);
void printAllPairs(int arr[], int n){
    for(int i=0; i<n; i++){
        int x=arr[i];
        for(int j=i+1; j<n; j++){
            int y = arr[j];
            std::cout<<x<<", "<<y<<std::endl;
        }
        std::cout<<std::endl;
    }
}

int main(){
    int arr[] = {10,20,30,40,50,60};
    int n=sizeof(arr)/sizeof(int);
    printAllPairs(arr,n);

}