#include <stdio.h>
#include<conio.h>
int main() {
    char metin[100];  // �ifrelenecek metni tutmak i�in
    int shift;        // Sezar �ifresinin kayd�rma de�eri
    int i;

    // Kullan�c�dan metin ve kayd�rma de�erini al
    printf("�ifrelenecek metni giriniz: ");
    scanf( "%[^\n]", metin);  // Kullan�c�dan bo�luklu metin almak i�in %[^\n] kullan�l�r

    printf("Sezar �ifreleme kaydirma degerini giriniz: ");
    scanf("%d", &shift);

    // �ifreleme i�lemi
    printf("�ifreli metin ve ASCII kodlar�: \n");
    for (i = 0; metin[i] != '\0'; i++) {
        if (metin[i] >= 'a' && metin[i] <= 'z') {
            // K���k harfler i�in Sezar �ifrelemesi
            metin[i] = ((metin[i] - 'a' + shift) % 26) + 'a';
        } else if (metin[i] >= 'A' && metin[i] <= 'Z') {
            // B�y�k harfler i�in Sezar �ifrelemesi
            metin[i] = ((metin[i] - 'A' + shift) % 26) + 'A';
        }

        // �ifreli karakteri ve ASCII kodunu yazd�r
        printf("%c (ASCII: %d)\n", metin[i], metin[i]);
    }
    getch();
    return 0;
}


