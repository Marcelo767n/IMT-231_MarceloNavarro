def trianguloCaracteres(n):
    alfabeto = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    piramide=''
    for i in range(n):
        piramide+=alfabeto[i]
        print(f"{piramide}")