def contadorPrimos(n): 
    contador = 0 
    if n<2:
        print("introduzca un numero mayor a 2")
    for i in range (2, n+1):
        esPrimo=True
        for j in range (2, i):
            if i%j==0:
                esPrimo=False
                break
        if esPrimo:
            contador+=1
    return contador
    