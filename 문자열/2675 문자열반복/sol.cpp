#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    int test=0;
    cin >> test;
    for(int a=0; a<test; a++){
        int num =0;
        string s;

        cin>>num; cin>>s;
    
    for(int i=0; i<s.size(); i++){
        for(int j=1; j<=num; j++)
        cout<<s.at(i);
    }
        cout << endl;
    }
    return 0;
}
