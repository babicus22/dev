#include<iostream>
int countClaps(std::string str);
int countClaps(std::string str){
    int counter{};
    for (size_t i =0; i<str.length(); i++)
        if(str.at(i)=='C')
            counter++;
    return counter;
}
int main(){
    std::string str;
    std::cout<<"\nEnter the claps dumbie!: ";
    std::cin>>str;
    std::cout<<"\nThe number of claps are: "<<countClaps(str)<<std::endl;
    return 0;
}