#include <stdio.h>

int main()
{
    int masukan_detik;
    scanf("%d", &masukan_detik);

    int jam = masukan_detik/3600;
    int habis_jam = masukan_detik%3600;
    int menit = habis_jam/60;
    int detik = habis_jam%60;

    printf("%02d : %02d : %02d\n", jam,menit,detik);
    return 0;
}




