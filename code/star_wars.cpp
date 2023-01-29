// Person	Relation
// Darth Vader	father
// Leia	sister
// Han	brother in law
// R2D2	droid

#include<iostream>
#include<string>

std::string relation(std::string name);
std::string relation(std::string name){
    if(name=="Darth Vader")
        return "Luke, I am your father.";
    else if(name=="Leia")
        return "Luke, I am your sister.";
    else if(name=="Han")
        return "Luke, I am your brother in law.";
    else if(name=="R2D2")
        return "Luke, I am your droid.";
    else
        return "Luke, mars in mortii matii";
}

int main(){
    std::string name;
    std::cout<<"Introduti numele jegosule:)):  ";
    getline(std::cin,name);
    std::cout<<std::endl;
    std::cout<<relation(name)<<std::endl;
    std::cout<<std::endl;
    return 0;
}