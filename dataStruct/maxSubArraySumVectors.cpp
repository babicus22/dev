#include<iostream>
#include<vector>

int largest_sum(std::vector<int> A);
int largest_sum(std::vector<int> A){
    std::vector<int> A_copy{};
    A_copy.push_back(A.at(0));
    for(int i=1; i<A.size(); i++){
        A_copy.push_back(A_copy.at(i-1)+A.at(i));
    }
    int largest_sum{-1000000000};
    for(int i=0; i<A_copy.size(); i++){
        for(int j=i; j<A_copy.size(); j++){
            int subArraySum{};
            if(i>0){
                subArraySum = A_copy.at(j)-A_copy.at(i-1);
            } else {
                subArraySum = A_copy[j];
            }
            if(subArraySum>largest_sum){
                largest_sum = subArraySum;
            }
        }
    }
    return largest_sum;
}
int main(){
    std::vector<int> A{-1,-2,-3,-4,-5};
    std::cout<<"The largest subArraySum in the array is :"<<largest_sum(A)<<std::endl;
    return 0;
}