#include "stdio.h" 
#include "stdlib.h" 

main(int arg, char *argv[]) 
{ 
float gr; 
char c = 0; 
gr=atof(argv[1]); 
if(arg==3) 
c = *argv[2]; 
if(c=='C' || !c || c=='c') 
{ 
if(gr<-273) 
printf("%.2f C:\nBelow Absolut zero!!\n", gr); 
else 
{ 
printf("C: %.2f \n", gr); 
printf("K: %.2f \n", gr + 273.15); 
printf("F: %.2f \n", gr*9/5.0+32); 
printf("\n"); 
} 
} 
if(c=='F' || !c || c=='f') 
{ 
if(gr<-459) 
printf("%.2f C:\nMenshe absolutnogo nulya allo!\n", gr); 
else 
{ 
printf("C: %.2f \n", (gr-32)*5/9.0); 
printf("K: %.2f \n", (gr-32)*5/9.0 + 273.15); 
printf("F: %.2f \n", gr); 
printf("\n"); 
} 
} 
if(c=='K' || !c || c=='k') 
{ 
if(gr<0) 
printf("%.2f C:\nBelow Absolut zero!!!\n", gr); 
else 
{ 
printf("C: %.2f \n", gr-273.15); 
printf("K: %.2f \n", gr); 
printf("F: %.2f \n", (gr-273.15)*9/5.0+32); 
printf("\n"); 
} 
} 
return 0; 
}
