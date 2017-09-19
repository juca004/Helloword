#include <conio.h>
#include <stdio.h>
#include <iostream>

main()

{
	int r,h,p;
	float pre;
	printf("T A B U L A D O R S \n");
	printf("Cuantos Recopiladores: \n");
	scanf("%d",&r);

	h = r*450;
	p = h*2;
	pre = p*.60;
	
	printf("El numero de hojas es: %d\n",h);	
	printf("El numero de paginas es: %d\n",p);
	printf("Usted tiene que pagar: %f\n",pre);
system("pause");
}
