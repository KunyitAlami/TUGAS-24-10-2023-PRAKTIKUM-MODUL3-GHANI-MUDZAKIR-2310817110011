masukan_detik = int(input())

jam = int(masukan_detik/3600)
sisa_detik_habis_jam = int(masukan_detik%3600)
menit = int(sisa_detik_habis_jam/60)
detik = int(sisa_detik_habis_jam%60)

print(f"{jam:02d}:{menit:02d}:{detik:02d}")




