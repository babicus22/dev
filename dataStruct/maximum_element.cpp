#include<iostream>
#include<vector>

int max_number(int a, int b);
int max_number(int a, int b){
    if(a>b){
        return a;
    } else {
        return b;
    }
}

int main(){
    std::vector<int> v{-3,4,1,2,3};
    int max = v[0];
    for(auto num: v)
        max = max_number(max, num);
    std::cout<<"The maximum number inside the array is: "<<max<<std::endl;
    std::cout<<std::endl;
    return 0;
}