bilangan = int (input ("Masukan Nilai : "))

if bilangan >= 1 and bilangan <=9 :
    print ("Satuan")
elif bilangan >=10 and bilangan <=19:
    print ("Belasan")
elif bilangan >=20 and bilangan <=99:
    print ("Puluhan")
elif bilangan == 0 :
    print ("Nol")
else :
    print ("Anda Menginput Melebihi Limit Bilangan")