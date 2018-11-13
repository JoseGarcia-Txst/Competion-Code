#include <iostream>
int main() {
    int cases , spots , data;
    std::cin>>cases;
    while(cases--){
        int max = -1, min =100;
        std::cin>>spots;
        while(spots--){
            std::cin>>data;
            if (min> data)
                min = data;
            if (max < data)
                max = data;
        }
        std::cout<<(max-min)*2<<std::endl;
    }
    return 0;
}