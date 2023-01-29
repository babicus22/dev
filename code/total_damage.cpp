#include<iostream>
#include<string>

unsigned int damageG(int damage, int speed, std::string time);
unsigned int damageG(int damage, int speed, std::string time){
    if(time=="second" && damage>0 && speed>0)
        return damage*speed;
    else if(time=="minute" && damage>0 && speed>0)
        return 60*damage*speed;
    else if(time=="hour" && damage>0 && speed>0)
        return 3600*damage*speed;
    else
        return 0;
    
}
int main(){
    int damage{}, speed{};
    std::string time;
    std::cout<<"\nEnter the damage the speed: ";
    std::cin>>damage>>speed;
    std::cout<<"\nEnter the time please now: ";
    std::cin>>time;
    std::cout<<"\nThe damage you get is: "<<damageG(damage, speed, time)<<std::endl;
    return 0;
}