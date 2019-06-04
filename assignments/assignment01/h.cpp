#include <iostream>

int fact(int x){
    int base=x;
    if(x>1){
        for(int i=0;i<x;i++){
            x-=1;
            base*=x;
        }
    }
    return base%10;
}
int main(){
    int tests;
    std::cin>>tests;
    for (int i=0;i<tests;i++){
        int x;
        std::cin>>x;
        std::cout<<fact(x)<<std::endl;
    }
    
    return 0;
}