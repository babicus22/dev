#include<iostream>

int divByB(int a, int b);
int divByB(int a, int b){
    int search_number{b};
    while(search_number<a){
        search_number+=b;
    }
    return search_number;
}
int main(){
    int a{}, b{};
    std::cout<<"\nBaga mai repede a si b: ";
    std::cin>>a>>b;
    std::cout<<"\nThe number searched is: "<<divByB(a,b)<<std::endl;
    return 0;
}