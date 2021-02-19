#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
    int ad;
     int n,r,s1=0,r2=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        r2=(r2*10)+r;
        n=n/10;
    }
    while(r2!=0)
    {
      r=r2%10;
        if(r==0)
            r=5;
        s1=(s1*10)+r;
        r2=r2/10;
    }
    printf("%d",s1);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}