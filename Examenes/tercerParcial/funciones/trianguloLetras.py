def triangulo_caracteres(n):        
    alfabeto = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    for i in range(1, n + 1):
        print(''.join(alfabeto[j % len(alfabeto)] for j in range(i)))
def trianguloCaracteres(n):
    alfabeto = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    for i in alfabeto:
        print(f"alfabeto[i]")
trianguloCaracteres(4)
