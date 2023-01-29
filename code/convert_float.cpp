#include<iostream>
#include<vector>
#include<string>
std::vector<float> numbers(std::vector<std::string> str);
std::vector<float> numbers(std::vector<std::string> str){
    std::vector<float> converted{};
    for(size_t i=0;i<str.size();i++)
        converted.push_back(std::stof(str.at(i)));
    return converted;
}
int main(){
    std::vector<std::string> arr{"1.4", "4.4", "5.7", "4.3", "9.8", "5.3", "8.7", "8.6", "9.8"};
    std::vector<float> conv{};
    conv = numbers(arr);
    for(auto num:conv)
        std::cout<<num<<" ";
    std::cout<<std::endl;
    return 0;
}