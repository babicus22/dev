#include<iostream>

int centuryFromYear(int year);
int centuryFromYear(int year){
    return (year%100==0)?(year/100):(year/100+1);
}
int main(){
    int year{};
    std::cout<<"\nEnter the year you want to calculate: ";
    std::cin>>year;
    std::cout<<centuryFromYear(year)<<std::endl;
    return 0;
}