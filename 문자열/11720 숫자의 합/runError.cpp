#include <stdio.h>
#include <string>
using namespace std;

int main(){
    int a,b, sum = 0;
    scanf("%d \n %d",&a, &b);
    for(int i=0; i<a; i++){
        sum += to_string(b).at(i)-'0';
    }
    printf("%d",sum);
}
