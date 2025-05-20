def piramide (n): #el parametro n es la altura de la piramide
    for i in range (1, n+1): #iteramos desde 1 hasta n+1 que seria el limete superior
        print(" "*(n-i), end="")
        print("*"*(2*i-1))
#Ejemplo de uso
piramide(5)