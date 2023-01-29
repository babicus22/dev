#include<iostream>
#include<stdio.h>

void print(char c);
void print(char c){
    std::cout<<int(c);
}

int main(){
    char c = 'a';
    print(c);
    std::cout<<std::endl;
    return 0;
}