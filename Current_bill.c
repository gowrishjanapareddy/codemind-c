#include<stdio.h>

int main()

{

    int a;

    scanf("%d",&a);

    if(a<=199)

    printf("%.2f",(a*1.20)+100);

    else if(a>=200&&a<267)

    printf("%.2f",(a*1.50)+100);

    else if(a<=267&&a<400)

    printf("%.2f",a*1.50+(a*1.50*0.15));

    else if(a<=400&&a>600)

    printf("%.2f",a*1.80+(a*1.80*0.15));

    else if(a>=600)

    printf("%.2f",a*2.00+(a*2.00*0.15));

    

}