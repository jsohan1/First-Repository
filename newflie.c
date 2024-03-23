#include <stdio.h>
int f(int x,int *py,int **ppz){
    int y,z;
    **ppz +=1 ; z = **ppz;
    *py +=2 ; y = *py ;
    x += 3;
    printf("%d %d %d %d %d \n",x,*py,**ppz,y,z);
    return x+y+z;
}
int main()
{
    int c , *b ,**a;
    c=4; b = &c; a = &b;
    printf("%d",f(c,b,a));
    return 0;
}
