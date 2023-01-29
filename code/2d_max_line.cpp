// sumMinimums([
//   [1, 2, 3, 4, 5],
//   [5, 6, 7, 8, 9],
//   [20, 21, 34, 56, 100]
// ]) ➞ 26
#include<iostream>
#include<vector>
int sum_mins(std::vector<std::vector<int>> arr){
    int sum{},min{};
    for(int i=0; i<arr.size(); i++){
        min = arr[i][1];
        for(int j = 0; j<arr[i].size(); j++){
            if(min>arr[i][j])
                min=arr[i][j];
        }
        sum+=min;
    }
    return sum;
}
int main(){
    std::vector<std::vector<int>> arr
    {
        {1,2,3,4,5},
        {5,6,7,8,9},
        {20,21,34,56,100}
    };
    std::cout<<sum_mins(arr)<<std::endl;
    return 0;
}