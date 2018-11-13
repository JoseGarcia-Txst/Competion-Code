#include <iostream>
#include <string>
int main() {
    int cases,x,y;
    std::cin>>cases;

    for(int i=0;i<cases;i++){
        std::cin>>x;
        std::cin>>y;

        if (x > y)
            std::cout<<">"<<std::endl;
        else if (x < y)
            std::cout<<"<"<<std::endl;
        else
            std::cout<<"="<<std::endl;
    }
    return 0;
}