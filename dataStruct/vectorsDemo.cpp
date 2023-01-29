#include<iostream>
#include<vector>
int main(){
    //Demo Vector
    // std::vector<int> arr={1,2,10,12,15};

    //Fill Constructor
    std::vector<int> arr(10,7);

    //pop_back
    arr.pop_back();

    //Push_back
    arr.push_back(16);

    //print all the elements
    for(int i=0; i<arr.size(); i++){
        std::cout<<arr.at(i)<<" ";
    }
    std::cout<<std::endl;

    //Size of the vector (no of elements)
    std::cout<<arr.size()<<std::endl;

    //Capacity of the vector
    std::cout<<arr.capacity()<<std::endl;

}