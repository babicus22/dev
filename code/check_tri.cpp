#include<iostream>

bool checkTriangle(int a, int b, int c);
bool checkTriangle(int a, int b, int c){
    if(((a+b)>c) && ((b+c)>a) && ((a+c)>b)) 
        return true;
    else 
        return false;
}
int main(){
    int a =3, b=4, c=5;
    std::cout<<checkTriangle(a,b,c);
    std::cout<<std::endl;
    return 0;
}