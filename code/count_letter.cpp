#include<iostream>
#include<string>

int countLetter(std::string str);
int countLetter(std::string str){
    int counter =0;
    for(char c:str)
        counter++;
    return counter;
}

int main(){
    std::string str{"https://omv.sharepoint.com/sites/MethanePlanProject/Shared%20Documents/Forms/AllItems.aspx?FolderCTID=0x0120004F43809521ECD440A819FA824D7CAA4D&id=%2Fsites%2FMethanePlanProject%2FShared%20Documents%2FGeneral%2FProducts%20working%20space%2FInventory&viewid=408a970a%2D945d%2D4d3f%2Db0f2%2D4c1be35945a7"};
    std::cout<<countLetter(str)<<" letters"<<std::endl;
    return 0;
}