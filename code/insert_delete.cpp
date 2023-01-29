#include<iostream>
#include<vector>

std::vector<int> nextInLine(std::vector<int> &que, int num){
    que.push_back(num);
    que.erase(que.begin());
    return que;
}

int main(){
    std::vector<int> line{1,2,3,4,5,6};
    int num{69};
    nextInLine(line,num);
    for(auto num:line)
        std::cout<<num<<" ";
    return 0;
}