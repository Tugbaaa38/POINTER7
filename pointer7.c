#include <stdio.h>
#include <stdlib.h>

//adreslerin artirilmasi ve cikarilmasi

int main() {
	
	int i;
	int dizi[10];
	for(i=0;i<10;i++)
	{
		*(dizi+i)=i;   //dizi[i]=i;
		printf("%d ",dizi[i]);
	}
	printf("\n");
    int *ptr;
    ptr=dizi;        //dizinin adresini ptr nesnesine atadik.
    for(i=0;i<10;i++)
    {
    	*(ptr+i)=i;          //ptr[i]=i;
    	printf("%d ",*(ptr+i));
    	
	}
	//iki kod da bize ayni ciktiyi verecektir..
	
	
	return 0;
}