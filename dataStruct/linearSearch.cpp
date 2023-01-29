#include<iostream>

int linear_search(int arr[], int n, int key);
int linear_search(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[]={10,15,12,9,6,4,3,10,8};
    int n =sizeof(arr)/sizeof(int);
    int key;
    std::cin>>key;
    int index = linear_search(arr,n,key);
    if(index!=-1){
        std::cout<<"Found at index: "<<index<<std::endl;
    } else {
        std::cout<<"The key was not found!";
    }
    std::cout<<std::endl;
    return 0;

}
