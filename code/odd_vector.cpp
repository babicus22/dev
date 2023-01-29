#include<iostream>
#include<vector>

std::vector<int> evenVector(std::vector<int> arr);

std::vector<int> evenVector(std::vector<int> arr){
    std::vector<int> even{};
    for(auto num: arr)
        if(num%2==0)
            even.push_back(num);
    return even;
}

int main(){
    std::vector<int> numbers{1,2,3,4,5,6}, even{};
    even=evenVector(numbers);
    for(auto num:even)
        std::cout<<num<<" ";
    std::cout<<std::endl;
    return 0;
}