#include<iostream>
#include<string>
std::string keyboardMistakes(std::string str);
std::string keyboardMistakes(std::string str){
    for(int i=0; i<str.length(); i++)
        if(str[i]=='4')
            str[i]='A';
        else if(str[i]=='5')
            str[i]='S';
        else if(str[i]=='0')
            str[i]='O';
        else if(str[i]=='1')
            str[i]='I';
    return str;
}

int main(){
    std::string str{"MUB45H1R"};
    std::cout<<keyboardMistakes(str)<<std::endl;
    return 0;
}