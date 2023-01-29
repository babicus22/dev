#include<iostream>

int needCars(int people);
int needCars(int people){
    return (people%5!=0)?(people/5+1):(people/5);
}
int main(){
    int people{16};
    std::cout<<needCars(people);
    return 0;
}