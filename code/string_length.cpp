#include<iostream>
#include<string>

int length_str(std::string str);
int length_str(std::string str){
    static int counter=0;
    if(str[counter]=='\0')
        return counter;
    else{
        counter++;
        return length_str(str);
    }

        
}

int main(){
    std::string str{"apple"};
    std::cout<<length_str(str)<<std::endl;
    return 0;
}