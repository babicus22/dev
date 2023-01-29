#include<iostream>
#include<vector>
bool check_orto(std::vector<int> arr1, std::vector<int> arr2);
bool check_orto(std::vector<int> arr1, std::vector<int> arr2){
    int dotProduct =0;
    for(size_t i=0; i<arr1.size(); i++)
        dotProduct += arr1.at(i)*arr2.at(i);
    if(dotProduct == 0)
        return true;
    else
        return false;
}
int main(){
    std::vector<int> arr1{1,2}, arr2{2,-1};
    std::cout<<std::boolalpha;
    std::cout<<check_orto(arr1,arr2)<<std::endl;
    return 0;
}