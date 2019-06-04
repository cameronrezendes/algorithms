#include <iostream> 
//#include <string.h>


int main(){
    int x;
    std::cin>>x;
    int z=0;
    for(int i=0;i<x;i++){
        int y;
        std::cin>>y;
        if(y<0){
            z++;
        }

    }
    
    std::cout<<z<<std::endl;
    

    return 0;
}
