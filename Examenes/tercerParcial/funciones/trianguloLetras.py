def triangulo_caracteres(n):        
    alfabeto = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    for i in range(1, n + 1):
        print(''.join(alfabeto[j % len(alfabeto)] for j in range(i)))
def trianguloCaracteres(n):
    alfabeto = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    piramide=''
    for i in range(n):
        piramide+=alfabeto[i]
        print(f" {piramide} ")
trianguloCaracteres(5)