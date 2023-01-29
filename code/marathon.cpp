#include<iostream>
#include<vector>

bool marathon_distance(std::vector<int> d);
bool marathon_distance(std::vector<int> d){
    int distance{};
    for(auto num:d)
        if(num<0)
            distance-=num;
        else
            distance+=num;
    if(distance==25)
        return true;
    else
        return false;
}
int main(){
    std::vector<int> d{1,2,3,4,10};
    std::cout<<std::boolalpha;
    std::cout<<marathon_distance(d)<<std::endl;
    return 0;
}