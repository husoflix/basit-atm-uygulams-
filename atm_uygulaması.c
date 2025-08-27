#include <stdio.h>

int main() {
    int secim;
    float bakiye = 1000.0;
    float miktar;

    do {
        printf("YESİL BANKASINA HOŞGELDİNİZ.\n");
        printf("1.Bakiyeyi göster  \n");
        printf("2.Para Cek  \n");
        printf("3 Para Yatır  \n");
        printf("4.Döviz  \n");
        printf("5.Çıkış  \n");
        scanf("%d", &secim);

        switch(secim) {
            case 1:
                printf("Bakiyeniz: %2f\n", bakiye);
                break;
            case 2:
                printf("Çekilecek Tutar: \n");
                scanf("%f", &miktar);
                if (miktar > bakiye) {
                    printf("Yetersiz bakiye\n");
                } else {
                    bakiye -= miktar;
                    printf("Yeni Bakiye: %2f\n", bakiye);
                }
                break;
            case 3:
                printf("Yatırılacak Tutar: \n");
                scanf("%f", &miktar);
                bakiye += miktar;
                printf("Yeni Bakiye: %2f\n", bakiye);
                break;
//            case 4:föviz işlemleri geliştirilecek

            case 5:
                printf("Çıkış yapılıyor\n");
                break;
            default:
                printf("Lütfen geçerli bir seçenek seçin\n");
        }
    } while(secim != 5);

    return 0;
}
