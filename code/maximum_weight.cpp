#include<iostream>
#include<vector>

bool canDrive(int car, std::vector<int> p, int maxWeight);
bool canDrive(int car, std::vector<int> p, int maxWeight){
    int p_weight{};
    for(int i=0; i<p.size(); i++)
        p_weight+=p.at(i);
    if((car+p_weight)<(maxWeight*2.2))
        return true;
    else
        return false;
}
int main(){
    int car = 2900, maxWeight = 1850;
    std::vector<int> p {150, 201, 75, 88, 195};
    std::cout<<canDrive(car, p, maxWeight)<<std::endl;
    return 0;
}