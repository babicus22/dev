#include<iostream>
#include<string>

std::string mdFormatting(std::string word, char style);

std::string mdFormatting(std::string word, char style){
    if(style == 'b' || style == 'B')
        return "**"+word+"**";
    else if(style == 'i' || style == 'I')
        return "_"+word+"_";
    else if(style == 'c' || style == 'C')
        return "`"+word+"`";
    else if(style == 's' || style == 'S')
        return "~~"+word+"~~";
    else
        return "Haha fii atent la ce tastezi in pula mea =))))!";
}



int main(){
    std::string word{""};
    char style = 'b';
    std::cout<<"Enter the word you want to format: ";
    std::cin>>word;
    std::cout<<"Now enter your format style: ";
    std::cin>>style;
    std::cout<<mdFormatting(word, style)<<std::endl;
    return 0;
}