#include <iostream>

#include <iostream> 
//#include <string.h>


int main(){
    int x;
    std::cin>>x;
    int arr[x];
    for(int i=0;i<x;i++){
        int y;
        std::cin>>y;
        arr[i]=y;
    }
    int z;
    std::cin>>z;
    int a=0;
    for(int i=0;i<x;i++){
        if(arr[i]>=z){
            a++;
        }
    }
    
    
    std::cout<<a<<std::endl;
    

    return 0;
}