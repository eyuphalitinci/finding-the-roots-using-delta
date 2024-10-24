#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
	int a,b,c;
	float delta,x1,x2;
	printf("a Sayisini Giriniz:\n");
	scanf("%d",&a);
	printf("b Sayisini Giriniz:\n");
	scanf("%d",&b);
	printf("c Sayisini Giriniz:\n");
	scanf("%d",&c);
	delta = b*b-4*a*c;
	if(delta > 0)
	{
		x1 = (-b+sqrt(delta))/2*a;
		x2 = (-b-sqrt(delta))/2*a;
		printf("Denklemin 1.Koku: %.1f\nDenklemin 2.Koku: %.1f",x1,x2);
	}
	else if(delta == 0)
	{
		x1 = x2 =-b/2*a;
		printf("Denklem Cift Kat Koku:%.1f",x1);
	}
	else
	{
		printf("Denklemin reel koku yok.");
	}
}

