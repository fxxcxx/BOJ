#include <string>
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    string s;
    int sum=0;
    
    cin>>s;
    
    int arr[26]={3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};
    
    for(int i=0; i<s.size(); i++){
        sum += arr[s[i]-'A'];
    }
    
    cout<<sum;
}
