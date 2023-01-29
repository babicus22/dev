#include<iostream>
#include<cmath>

int avgTime(int years, int moves);
int avgTime(int years, int moves){
    double avg_time{};
    avg_time = (double)years/((double)moves+1.00);
    return int(round(avg_time));
}
int main(){
    int years{23}, moves{2};
    std::cout<<"\nThe average times is :"<<avgTime(years, moves)<<std::endl;
    return 0;
}