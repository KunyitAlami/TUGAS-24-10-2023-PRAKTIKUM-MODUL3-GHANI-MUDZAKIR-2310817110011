masukan_detik = int(input())

hari = int(masukan_detik/86400)
sisa_detik_habis_hari = int(masukan_detik%86400)
jam = int(sisa_detik_habis_hari/3600)
sisa_detik_habis_jam = int(masukan_detik%3600)
menit = int(sisa_detik_habis_jam/60)
detik = int(sisa_detik_habis_jam%60)

if hari == 0:
    print(f"{jam:02d}:{menit:02d}:{detik:02d}")

elif hari != 0:
    print(f"{hari:2d} hari {jam:02d}:{menit:02d}:{detik:02d}")




