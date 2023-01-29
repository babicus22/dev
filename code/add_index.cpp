#include<iostream>
#include<vector>
std::vector<int> add_index(std::vector<int> arr);
std::vector<int> add_index(std::vector<int> arr){
    for(size_t i=0; i<arr.size(); i++)
        arr.at(i)=+ int(i);
    return arr;
}
int main(){
    std::vector<int> numbers{0,0,0,0,0,0}, added_inedx{};
    added_inedx = add_index(numbers);
    for(auto num:added_inedx)
        std::cout<<num<<" ";
    std::cout<<std::endl;
    return 0;
}
