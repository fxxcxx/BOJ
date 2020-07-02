#include <iostream>
#include <string>
using namespace std;
 
int main() {
 
    string s;
    cin >> s;
 
    int alpha;
    for (char i = 'a'; i <= 'z'; i++) {
        alpha = s.find(i);
        cout << alpha << " ";
    }
}

