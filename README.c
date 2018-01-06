# SimpleCalC
a calculator which does operations from left to right using C



#include <stdio.h>
#include <conio.h>
void main()
  {
    int n1, n2, sum;
    char opr='o';
	printf("Enter the Operation followed by signs. Press x to end");
    scanf("%d", &n1);
    sum=n1;
    while(opr!='x')
    {
        scanf("%c",&opr);
        n2=0;
        if (opr=='+') scanf("%d", &n2);
            sum+=n2;
        else if (opr=='-') scanf("%d", &n2)
            sum-=n2
        else if (opr=='/') scanf("%d", &n2)
            sum/=n2
        else (opr='*')  scanf("%d", &n2)
            sum*+=n2}
    }
    printf("%d", sum);

}
