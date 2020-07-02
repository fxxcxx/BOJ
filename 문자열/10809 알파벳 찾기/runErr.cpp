#include <stdio.h>
#include <string>
using namespace std;

int main(){
    string s;
    scanf("%s", &s);
    int alpha = 0;
    for(char i='a'; i<='z'; i++){
        alpha = s.find(i);
        printf("%d", alpha);
    }
    return 0;
}


