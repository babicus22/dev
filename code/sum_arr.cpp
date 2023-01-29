#include<iostream>
#include<vector>

std::string evenOdd(std::vector<int> arr);
std::string evenOdd(std::vector<int> arr){
    int sum=0;
    for(size_t i=0; i<arr.size(); i++)
        sum+=arr.at(i);
    if(sum%2==0)
        return "even";
    else
        return "odd";
}

int main(){
    std::vector<int> numbers{};
    std::cout<<evenOdd(numbers);
    return 0;
}