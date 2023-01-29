#include<iostream>
#include<string>

std::string modify_last(std::string str, int n);
std::string modify_last(std::string str, int n){
    std::string last_char{str.at(str.length()-1)};
    for(size_t i=0; i<n; i++)
        str+=last_char;
    return str;
}
int main(){
    std::string str{"hey"};
    int n{6};
    std::cout<<modify_last(str, n)<<std::endl;
    return 0;
}