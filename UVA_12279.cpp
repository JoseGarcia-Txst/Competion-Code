#include <iostream>
#include <string>

int main() {
    int cases, data, index = 1;

    while(std::cin>> cases && cases!= 0){
        std::cin.ignore(256,'\n');
        int balance = 0;
        for(int i = 0; i < cases; i++){
            std::cin>>data;

            if(data != 0 )
                balance++;
            else
                balance--;
        }
        std::cout<<"Case "<<index<<": "<<balance<<std::endl;
        index++;
    }
    return 0;
}