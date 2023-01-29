#include<iostream>
#include<math.h>

unsigned long sumCubes(int n){
    double sum{};
    for(size_t i=1; i<=n; i++)
        sum+=pow(i,3);
    return long(sum);
}

int main(){
    int n{};
    std::cout<<"\nEnter the n for the calculation: ";
    std::cin>>n;
    std::cout<<sumCubes(n)<<std::endl;
    return 0;
}