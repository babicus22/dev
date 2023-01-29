#include<iostream>

int binary_search(int arr[], int n, int key);
int binary_search(int arr[], int n, int key){
    //Implement binary search
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==key){
            return mid;
        } else if(arr[mid]>key){
            e = mid -1;
        } else {
            s=mid+1;
        }
    }    
    return -1;
}

int main(){
    int arr[]={10,20,30,40,45,60,70,89};
    int n=sizeof(arr)/sizeof(int);
    int key{};
    std::cin>>key;
    int index = binary_search(arr,n,key);
    if(index!=-1){
        std::cout<<key<<" is present at index "<<index<<std::endl;
    } else {
        std::cout<<key<<" NOT found!"<<std::endl;
    }
    std::cout<<std::endl;
    return 0;
}