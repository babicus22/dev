#include<iostream>
#include<string>
std::string evenOddString(std::string txt);
std::string evenOddString(std::string txt){
    std::string even_odd;
    int i{};
    while(i<txt.length()){
        even_odd+=txt.at(i);
        i+=2;
    }
    i=1;
    even_odd+=" ";
    while(i<txt.length()){
        even_odd+=txt.at(i);
        i+=2;
    }
    return even_odd;
}
int main(){
    std::string word{"Samoarajacsana"};
    std::cout<<evenOddString(word)<<std::endl;
    return 0;
}