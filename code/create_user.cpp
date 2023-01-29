#include<iostream>
#include<string>
#include<ctype.h>
#include<cctype>
std::string createId(std::string firstName, std::string lastName);
std::string createId(std::string firstName, std::string lastName){
    std::string user_id;
    user_id= (char)tolower(firstName[0]);
    user_id+=(char)toupper(lastName[0]);
    user_id+=(char)tolower(lastName[1]);
    user_id+=(char)tolower(lastName[2]);
    return user_id;
}
int main(){
    std::string firstName{"Ionut"}, lastName{"Vasile"};
    std::cout<<createId(firstName, lastName)<<std::endl;
    return 0;
}