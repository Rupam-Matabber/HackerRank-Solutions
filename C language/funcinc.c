#include <stdio.h>
int max(int x, int y){
    if (x>y)
    {
        return x;
    }
    else{
        return y;
    }
}
int max_of_four(int a, int b, int c, int d){
    int first = max(a,b);
    int second = max(c,d);

    return max(first, second);
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}