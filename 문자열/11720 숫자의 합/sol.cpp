#include <stdio.h>
using namespace std;

int main(){
    int a, sum = 0;
    scanf("%d", &a);
    char arr[a];
    scanf("%s", &arr);
    
    for(int i=0; i<a; i++){
        sum += arr[i]-'0';
    }
    printf("%d",sum);
}
