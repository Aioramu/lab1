#include <stdio.h>
#include <locale.h>
main ()
{
	setlocale(LC_ALL, "RUS");
	float k,f,c,x;
	int num;
		printf("vvedite 1 chtobi poschityat iz kelvinov\n");
			printf("vvedite 2 chtobi poschityat iz farengayta\n");
				printf("vvedite 3 chtobi poschityat iz celsia\n");
					printf("chtobi poschityat vse veliciny vvedite lybuyu zifru\n");
	scanf("%d",&num);
	switch(num)
	{
	case 1:	
		printf("Vvedite temp v gradusah Kelvina:");
		scanf("%f",&k);
		f= 1.8*(k-273)+32;
		c=k-273;
		printf("%.2f K :\n %.2f F\n %.2f C\n",k,f,c);
	break;
	
	case 2:
		printf("Vvedite temp v gradusah Farengayta:");
		scanf("%f",&f);
		k=(f-32)/1.8+273;
		c=(f-32)*0.56;
		printf("%.2f F :\n %.2f K\n %.2f C\n",f,k,c);
	break;

	case 3:
		printf("Vvedite temp v gradusah Celsia:");
		scanf("%f",&c);
		f=(c*1.8)+32;
		k=c+273;
		printf("%.2f C :\n %.2f F\n %.2f K\n",c,f,k);
	default:
		scanf("%f",&x);
		k=(x-32)/1.8+273;
		c=(x-32)*0.56;
		printf("%.2f F :\n %.2f K\n %.2f C\n\n",x,k,c);
		
		f= 1.8*(x-273)+32;
		c=x-273;
		printf("%.2f K :\n %.2f F\n %.2f C\n\n",x,f,c);
		
		f=(x*1.8)+32;
		k=x+273;
		printf("%.2f C :\n %.2f F\n %.2f K\n\n",x,f,k);
	}
}

