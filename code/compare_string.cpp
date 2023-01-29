#include<iostream>
#include<string>

bool comp(std::string str1, std::string str2);
bool comp(std::string str1, std::string str2){
    if(str1.length()==str2.length())
        return true;
    else
        return false;
}
int main(){
    std::string str1, str2;
    std::cout<<"\nEnter the strings you want to compare: ";
    std::cin>>str1>>str2;
    std::cout<<comp(str1,str2)<<std::endl;
    return 0;
}