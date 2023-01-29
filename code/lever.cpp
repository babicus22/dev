#include<iostream>
#include<string>
#include<vector>

std::string determineLever(std::vector<char> arr);
std::string determineLever(std::vector<char> arr){
    if(arr.at(1)=='f')
        return "first class lever";
    else if(arr.at(2)=='f')
        return "second class lever";
    else if(arr.at(0)=='f')
        return "third class lever";
    else
        return "Wrong input!Error 404 Not Found!";
}

int main(){
    std::vector<char> c{'e','f','l'};
    std::cout<<determineLever(c)<<std::endl;
    return 0;
}