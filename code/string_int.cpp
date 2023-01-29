#include<iostream>
#include<string>
#include<sstream>

int stringToNum(std::string str);
int stringToNum(std::string str){
    return stoi(str);

}
int main(){
    std::string str;
    std::cout<<"\nEnter the string you want to convert to integer: ";
    std::cin>>str;
    std::cout<<stringToNum(str)<<std::endl;
    return 0;
}