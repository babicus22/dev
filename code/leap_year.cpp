#include<iostream>

bool leap_year(int year);
bool leap_year(int year){
    if(year%400 == 0)
        return true;
    else if(year%4 == 0 && year%100!=0)
        return true;
    else
        return false;
}

int main(){
    int year{};
    std::cout<<"\nWhat year do you want to cheack if it is leap year or not? :";
    std::cin>>year;
    std::cout<<std::boolalpha<<std::endl;
    std::cout<<leap_year(year);
    std::cout<<std::endl;
    return 0;
}