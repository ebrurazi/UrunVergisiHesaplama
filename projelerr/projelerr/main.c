#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <stdlib.h>

int main(void){
    int secim;
    float fiyat,vergiliFiyat;
    char devamMı='e';
    
    printf("*********************URUN VERGİSİ HESAPLAMA*********************\n\n");
    
    printf("HOŞ GELDİNİZ!\n\n");
    //Öğrenmek istediğiniz seçeneği tıklayabilirsiniz
    printf("Hesaplamak Istediğiniz Urun İçin Gerken Tuşa Basınız\n\n");
    printf("Kitap vergisini hesaplamak için 0'a basınız.\n");
    printf("Gıdaların vergisini hesaplamak için 1'e basınız.\n");
    printf("Teknolojik aletlerin vergisini hesaplamak için 2'ye basınız.\n");
    printf("Meyve ve sebzelerin vergisini hesaplamak için 3'ye basınız.\n");
    
    //While dongusune girdiğinizde devam etmek istemediğibiz takdirde 'h'ye basıp çıkabilmektesniz.
    while (devamMı != 'h') {
        printf("\nSeçiniz : ");
        scanf("%d",&secim);
        switch (secim) {
                //Her ürüne farklı bir vergi değeri verdik
            case 0:
                printf("Kitabın fiyatını giriniz : ");
                scanf("%f",&fiyat);
                vergiliFiyat=fiyat+fiyat*0.17;
                printf("Kitabın vergili fiyatı : %.2f\n",vergiliFiyat);
                break;
            case 1:
                printf("Temel gıdanın fiyatını giriniz : ");
                scanf("%f",&fiyat);
                vergiliFiyat=fiyat+fiyat*0.18;
                printf("Temel gıdanın vergili fiyatı : %.2f\n",vergiliFiyat);
                break;
            case 2:
                printf("Lüks ürünün fiyatını giriniz : ");
                scanf("%f",&fiyat);
                vergiliFiyat=fiyat+fiyat*0.20;
                printf("Teknolajik aletlerin vergili fiyatı : %.2f\n",vergiliFiyat);
                break;
            case 3:
                printf("Meyve veya sebzelerin fiyatını giriniz : ");
                scanf("%f",&fiyat);
                vergiliFiyat=fiyat+fiyat*0.08;
                printf("Meyve ve sebzelerin vergili fiyatı : %.2f\n",vergiliFiyat);
                break;
            default:
                printf("Lütfen geçerli bir rakam giriniz!! \n");
                break;
        }
        //Devam edip etmek istemediği burada sorulur
        printf("\nDevam etmek istiyor musunuz?(Evet ise:e, Hayır ise:h) : ");
        scanf(" %c",&devamMı);
    }
    printf("\n\n");
    return 0;
}
