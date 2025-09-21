
//Finding Biggest and Smallest Among Three Numbers

#include <stdio.h>

int main() {
    int a, b, c, g1,g2,s1, s2;

    printf("Enter any 3 integer numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    g1=(a>b)? a:b;
    g2=(g1>c)? g1:c;


     s1=(a<b)? a:b;
    s2=(s1<c) ? s1:c;
    printf("greatest number  %d\n", g2);



    printf("smallest number  %d,"s2);


   
    
    return 0;
}





