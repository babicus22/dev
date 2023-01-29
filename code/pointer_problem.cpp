#include <iostream>

void print_arr(int *arr_ptr, size_t size);
int *apply_all(int *arr1_ptr, size_t size1, int *arr2_ptr2, size_t size2);

void print_arr(int *arr_ptr, size_t size){
    for (size_t i =0; i<size; i++)
        std::cout<<*(arr_ptr+i)<<" ";
    std::cout<<std::endl;
}

int *apply_all(int *arr1_ptr, size_t size1, int *arr2_ptr, size_t size2){
    int *new_arr_ptr = new int[size1*size2];
    int counter =0;
    for(size_t j =0; j<size2; j++){
        for(size_t i=0; i<size1; i++){
            *(new_arr_ptr+counter) = (*(arr1_ptr+i))*(*(arr2_ptr+j));
            counter++;
        }
    }
    return new_arr_ptr;
}

int main(){
    int arr1[] {1,2,3,4,5};
    int arr2[] {10,20,30};
    size_t size1 {5}, size2 {3};
    std::cout<<"Array 1: ";
    print_arr(arr1,size1);
    std::cout<<std::endl;
    std::cout<<"\n------------------------------------"<<std::endl;
    int *result = apply_all(arr1, size1, arr2, size2);
    print_arr(result,size1*size2);
    return 0;
}