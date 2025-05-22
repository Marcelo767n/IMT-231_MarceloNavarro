#5. Verificar si un número es palíndromo (número capicúa).
def verifPalindromo(n):
    num=str(n)#converitmos el numero a string
    inverido=num[::-1]#invertimos el string
    if num==inverido:#comparamos el string original con el invertido
        print("El numero es palindromo")
    else:
        print("El numero no es palindromo")