#include<iostream>

int total_cups(int n);
int total_cups(int n){
    return (n/6)+n;
}
int main(){
    int n{213};
    std::cout<<total_cups(n)<<std::endl;
    return 0;    
}
