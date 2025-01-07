#include <stdio.h>
#include<conio.h>
int main() {
    char metin[100];  // Þifrelenecek metni tutmak için
    int shift;        // Sezar þifresinin kaydýrma deðeri
    int i;

    // Kullanýcýdan metin ve kaydýrma deðerini al
    printf("Þifrelenecek metni giriniz: ");
    scanf( "%[^\n]", metin);  // Kullanýcýdan boþluklu metin almak için %[^\n] kullanýlýr

    printf("Sezar þifreleme kaydirma degerini giriniz: ");
    scanf("%d", &shift);

    // Þifreleme iþlemi
    printf("Þifreli metin ve ASCII kodlarý: \n");
    for (i = 0; metin[i] != '\0'; i++) {
        if (metin[i] >= 'a' && metin[i] <= 'z') {
            // Küçük harfler için Sezar þifrelemesi
            metin[i] = ((metin[i] - 'a' + shift) % 26) + 'a';
        } else if (metin[i] >= 'A' && metin[i] <= 'Z') {
            // Büyük harfler için Sezar þifrelemesi
            metin[i] = ((metin[i] - 'A' + shift) % 26) + 'A';
        }

        // Þifreli karakteri ve ASCII kodunu yazdýr
        printf("%c (ASCII: %d)\n", metin[i], metin[i]);
    }
    getch();
    return 0;
}


