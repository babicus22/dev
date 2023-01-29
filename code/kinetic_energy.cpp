#include<iostream>
#include<cmath>

int kinetic(float m, float v);
int kinetic(float m, float v){
    double energy{};
    energy = (m*v*v)/2;
    return int(round(energy));
}

int main(){
    float m = 63.5, v = 7.35;
    std::cout<<kinetic(m,v)<<std::endl;
    return 0;
}