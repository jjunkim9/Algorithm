#include <stdio.h>

int main()
{
    int i, a;
    int b, c;
    
    scanf("%d", &i);
    
    for(a=0; a<i; a++){
        scanf("%d %d", &b, &c);
        printf("%d\n", b+c);
    }
    
    return 0;
}