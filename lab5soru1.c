#include <stdio.h>
/*iþaretçileri kullanarak iki sayý toplamak için C'de bir program yazýn */

int main ()	{

int sayi1,sayi2;	
int toplam;	
int *ptr1,*ptr2;
ptr1=&sayi1;
ptr2=&sayi2;
	
printf("iki sayi giriniz");	
	scanf("%d %d",ptr1,ptr2);
	
	
	toplam=*ptr1+*ptr2;
	
	printf("toplam= %d",toplam);
	
	
	return 0;
}
