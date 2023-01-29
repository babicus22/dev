// firstPlace("====b===O===e===U=A==") ➞ 'A'

// firstPlace("e==B=Fe") ➞ 'e'

// firstPlace("proeNeoOJGnfl") ➞ 'l'

#include<iostream>
#include<string>

char firstPlace(std::string road);
char firstPlace(std::string road){
    bool has_cars=false;
    if(road.length()==0){
        return '0';
    }

    for(size_t i =0; i<road.length(); i++){
        if(road.at(i)!='='){
            has_cars=true;
        }
    }
    if(has_cars){
        for(size_t i = road.length()-1; i>0; i--){
            if(road.at(i)!='='){
                return road.at(i);
            }
        }
    } else { 
        return '0';
    }
}
int main(){
    std::string road{"====A=====c=====a========b==="};
    std::cout<<firstPlace(road)<<std::endl;
    return 0;
}