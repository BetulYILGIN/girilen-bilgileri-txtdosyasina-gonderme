#include<stdio.h>
#include<string.h>
struct ogrenci
{
 char adi[10];
 int yas;
 int toplam;
};
int main()
{
 struct ogrenci ogr;
 FILE *dosya1,*dosya2;
 int k=0;
 float top=0.0;
 dosya1 = fopen("yeni.txt", "a");
 for(int i=1; i<=4; i++)
 {
 printf("Ogrencinin adini, yasini  giriniz :");
 scanf("%s %d ",ogr.adi, &ogr.yas);
 fprintf(dosya1,"%s %d ", ogr.adi, ogr.yas);
 }
 fclose(dosya1);
 dosya2 = fopen("yeni.txt", "r");
 while(!feof(dosya2))
 {
 	for(toplam=0;toplam<i;i++)	{
	 
fscanf(dosya2,"%s %d", ogr.adi, &ogr.yas);
toplam=ogr.yas
int ortalama=top/i;
}
printf("%s %d \n", ogr.adi, ogr.yas);
 k++;
 
 }
fclose(dosya2);
printf("Su an dosyamizda toplam %d kayit bulunmaktadir.\n",k);
printf("Toplam %d ogrencinin yas bilgisi \n",k);
return 0;
}
