#include<stdio.h>
int main()
{
    int a,b,add,sub,multiple,div,o,n;
    printf("\n 1. ADDITION  \n 2. SUBTRACTION  \n 3. MULTIPLICATION  \n 4. DIVISION");
    printf("\n ENTER THE NUMBER BETWEEN 1-4 = ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("\n ENTER THE VALUE OF A = ");
        scanf("%d",&a);
        printf("\n ENTER THE VALUE OF B = ");
        scanf("%d",&b);
        add=a+b;
        printf("\n ADDITION = %d ",add);
        break;
        case 2:
        printf("\n ENTER THE VALUE OF A = ");
        scanf("%d",&a);
        printf("\n ENTER THE VALUE OF B = ");
        scanf("%d",&b);
        sub=a-b;
        printf("\n SUBTRACTION = %d ",sub);
        break;
        case 3:
        printf("\n ENTER THE VALUE OF A = ");
        scanf("%d",&a);
        printf("\n ENTER THE VALUE OF B = ");
        scanf("%d",&b);
        multiple=a*b;
        printf("\n MULTIPLICATION = %d ",multiple);
        break;
        case 4:
        printf("\n ENTER THE VALUE OF A = ");
        scanf("%d",&a);
        printf("\n ENTER THE VALUE OF B = ");
        scanf("%d",&b);
        div=a/(float)b;
        printf("\n DIVISION = %d ",div);
        break;
        default :
        printf("\n ENTER VALID NUMBER !!");
        break;
    }
    return 0;
}