#include<iostream>

bool cake(int total, int people, int each);
bool cake(int total, int people, int each){
    if(people*each>total)
        return false;
    else
        return true;
}

int main(){
    int total{}, people{}, each{};
    std::cout<<"\nEnter the total the people and the each: ";
    std::cin>>total>>people>>each;
    std::cout<<std::boolalpha;
    std::cout<<cake(total, people, each)<<std::endl;
    return 0;
}