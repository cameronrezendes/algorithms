#include <iostream>

int distinctCities(int n){
    std::string arr[n];

    int x=0;
    for (int i=0;i<n;i++){
        std::cout<<"Enter cities"<<std::endl;
        std::string city;
        std::cin>>city;
        arr[i]=city;
    
    }
    
    return 0;
}

int main(){
    std::cout<<"Enter #test cases"<<std::endl;
    int testcases;
    std::cin>>testcases;
    for(int i=0; i<testcases; i++){
        std::cout<<"Enter # of trips"<<std::endl;
        int n;
        std::cin>>n;
        int numCities= distinctCities(n); 
    }

    return 0;
}