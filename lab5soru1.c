#include <stdio.h>
/*i�aret�ileri kullanarak iki say� toplamak i�in C'de bir program yaz�n */

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
