#include<iostream>
#include<vector>

std::vector<int> mirror(std::vector<int> arr);
std::vector<int> mirror(std::vector<int> arr){
    std::vector<int> mirrored{};
    for(size_t i=0; i<arr.size(); i++)
        mirrored.push_back(arr.at(i));
    for(size_t i=arr.size()-1; i--;)
        mirrored.push_back(arr.at(i));
    return mirrored;
}
int main(){
    std::vector<int> arr{1,2,3,4,5,6,7}, mirrorred{};
    mirrorred = mirror(arr);
    for(auto num: mirrorred)
        std::cout<<num<<" ";
    std::cout<<std::endl;
    return 0;
}