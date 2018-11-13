#include <iostream>
int main() {
    int cases,index =1;
    std::cin>>cases;
    std::cin.ignore();

    while(cases--){
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);

        if(( x > y && x < z)||(x < y && x > z))
            std::cout<<"Case "<<index<<": "<<x<<std::endl;
        else if((y > x && y < z)||(y < x && y >z ))
            std::cout<<"Case "<<index<<": "<<y<<std::endl;
        else
            std::cout<<"Case "<<index<<": "<<z<<std::endl;
        index++;
    }
    return 0;
}