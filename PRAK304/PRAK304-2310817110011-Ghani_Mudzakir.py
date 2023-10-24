nilai= int(input())

if (nilai == 0):

    print("Nol")

elif(nilai > 0 and nilai < 10):

    print("Satuan")

elif(nilai > 10 and nilai <= 19):

    print("Belasan")

elif (nilai > 99):

    print("Anda Menginput Melebihi Limit Bilangan")

else:
    print("Puluhan")

