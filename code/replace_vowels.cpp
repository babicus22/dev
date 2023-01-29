#include<iostream>
#include<string>

std::string replaceVowel(std::string word);
std::string replaceVowel(std::string word){
    for(size_t i=0; i<word.length(); i++){
        if(word.at(i)=='a')
            word.at(i)='1';
        else if(word.at(i)=='e')
            word.at(i)='2';
        else if(word.at(i)=='i')
            word.at(i)='3';
        else if(word.at(i)=='o')
            word.at(i)='4';
        else if(word.at(i)=='u')
            word.at(i)='5';
    }
    return word;
}

int main(){
    std::string str{"karachi"};
    std::cout<<replaceVowel(str)<<std::endl;
    std::cout<<str;
    return 0;
}