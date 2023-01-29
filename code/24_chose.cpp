#include<iostream>
#include<string>
std::string operation(int num1, int num2);
std::string operation(int num1, int num2){
    if(num1+num2==24)
        return "added";
    else if((num1>num2) && (num1-num2)==24)
        return "substracted";
    else if((num1<num2) && (num2-num1==24))
        return "substracted";
    else if((num1>num2) && (num1/num2==24))
        return "devided";
    else if((num2>num1) && (num2/num1==24))
        return "devided";
    else if(num1*num2==24)
        return "multiplied";
    else 
        return "Invalid";
}
int main(){
    int num1=2, num2=12;
    std::cout<<operation(num1,num2)<<std::endl;
    return 0;
}