#include<iostream>
#include<string>

std::string repeat_three(std::string str);
std::string repeat_three(std::string str){
    std::string firstThree{str.substr(0,3)};
    return firstThree+firstThree+firstThree;
}
int main(){
    std::string str{"Cucumber"};
    std::cout<<repeat_three(str)<<std::endl;
    return 0;
}