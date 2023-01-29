#include<iostream>
#include<string>
int clubEntry(std::string word);
int clubEntry(std::string word){
    std::string alphabet{"abcdefghijklmnopqrstuvwxyz"};
    for(size_t i =0; i<word.length()-1; i++){
        if(word.at(i)==word.at(i+1)){
            for(size_t j=0; j<alphabet.length(); j++){
                if(word.at(i)==alphabet.at(j)){
                    return int((j+1)*4);
                }
            }
        }
    }
    return -1;
}
int main(){
    std::string word{"hill"};
    std::cout<<clubEntry(word)<<std::endl;
    return 0;
}