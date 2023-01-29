#include<iostream>
#include<string>

std::string reverse_str(std::string sentence);
std::string reverse_str(std::string sentence){
    std::string reversed;
    for(size_t i = sentence.length()-1; i>=0; i--){
        reversed+=sentence.at(i);
    }
    return reversed;
}

int main(){
    std::string sentence, reverse_sentence;
    std::cout<<"Introdu odata propozitia ca nu stau dupa tine =)))):";
    getline(std::cin,sentence);
    reverse_sentence=reverse_str(sentence);
    for(char c:reverse_sentence)
        std::cout<<c;
    return 0;
}