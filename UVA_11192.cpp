#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n, group;
    string input;
    vector<char> vec;

    while(scanf("%d",&n)) {
        if( n == 0 )
            break;

        getline(cin,input);

        for(int i = 1;i < input.length();i++)
            vec.push_back(input[i]);

        group = (input.size()-1) / n;

        for(int i = 0; i < vec.size(); i+= group){
            int offset = group +i ;
            reverse(vec.begin()+i , vec.begin() + offset);
        }

        for (int i = 0; i < vec.size(); i++)
            cout<<vec[i];

        cout<<endl;
        vec.clear();
    }

}