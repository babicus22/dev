#include<iostream>
#include<string>
bool lastChar(std::string name);
bool lastChar(std::string name){
    size_t size{};
    size = name.length();
    if(name.at(size-1)=='n')
        return true;
    else 
        return false;
}
int main(){
    std::string name;
    std::cout<<"\nBaga in pula mea numele odata :)):";
    std::cin>>name;
    std::cout<<lastChar(name)<<std::endl;
    return 0;

}