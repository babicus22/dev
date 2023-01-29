#include<iostream>
#include<vector>

int countD(std::string sentence);
int countD(std::string sentence){
    int counter{};
    for(size_t i=0; i<sentence.length(); i++){
        if(sentence.at(i)=='d' || sentence.at(i)=='D')
            counter++;
    }
    return counter;
}
int main(){
    std::string sentence{"Bodi este inalt ca bradu si prost ca gardu!"};
    std::cout<<countD(sentence)<<std::endl;
    return 0;
}