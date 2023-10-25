#include <stdio.h>

int main()
{
    int masukan_detik;
    scanf("%d", &masukan_detik);

    int hari = masukan_detik/86400;
    int sisa_detik_habis_hari = masukan_detik%86400;
    int jam = masukan_detik/3600;
    int habis_jam = masukan_detik%3600;
    int menit = habis_jam/60;
    int detik = habis_jam%60;

    if (hari == 0){
        printf("%02d : %02d : %02d\n", jam,menit,detik);
    }
    else if( hari != 0){
        printf("%d hari %02d : %02d : %02d\n", hari,jam,menit,detik);
    }

    return 0;
}




