#include<iostream>
#include<string>
std::string multiple(int n);
std::string multiple(int n){
    int number{};
    std::string str;
    for(int i = 1; i<=10; i++){
        number=i*n+1;
        if(i!=10)
            str+=std::to_string(number)+",";
        else 
            str+=std::to_string(number);
    }
    return str;
}
int main(){
    int n=1;
    std::cout<<multiple(n)<<std::endl;
    return 0;
}