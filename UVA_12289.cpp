#include <iostream>

int stringCompare(std::string x,std::string y){
    int correct = 0;
    for(int i = 0;i < x.length();i++) {
        if (x[i] == y[i])
            correct++;
    }
    return correct;
}

int main() {
    int cases;
    std::string word;

    std::cin>>cases;
    while(cases--){
        std::cin>>word;

        if(word.length()==3) {
            if (stringCompare(word, "one") >= 2)
                std::cout << "1" << std::endl;
            else if (stringCompare(word, "two") >= 2)
                std::cout << "2" << std::endl;
        }
        else
            std::cout<<"3"<<std::endl;
    }
    return 0;
}