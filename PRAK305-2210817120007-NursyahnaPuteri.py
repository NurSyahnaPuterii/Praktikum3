detik = int (input("masukan detik : "))

sisadetikA = detik % 86400
sisadetikB = detik % 3600
detikX     = detik % 60
menit      = sisadetikB // 60
jam        = sisadetikA // 3600
hari       = detik //86400

if detik >=1 and detik < 60 :
    print ("00:00:%.2d" % (detik))
elif detik >=60 and detik < 3600 :
    print ("00:%.2d:%.2d"% (menit, detikX))
elif detik >=3600 and detik < 86400 :
    print ("%.2d:%.2d:%.2d"% (jam, menit, detikX))
else :
    print ("%d hari %.2d:%.2d:%.2d"% (hari, jam, menit, detikX))