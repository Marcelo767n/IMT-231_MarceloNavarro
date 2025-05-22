from funciones import sumaDivisores, trianguloCaracteres, mostrarPrimerosPrimos, fibonacciInversa
opcion=0
def menu():
    print("""----- MENÚ DE FUNCIONES -----
1. Calcular la suma de todos los divisores de un número N (excluyendo el propio
número).
2. Generar un triángulo de caracteres con letras del alfabeto hasta una altura N.
3. Mostrar los primeros N números primos.
4. Generar la secuencia de los primeros N términos de la serie de Fibonacci
inversa.
5. Salir del programa.
""")
def pedir_datos():
    n= int(input("ingrese un numero: "))
    return n

while True:
    menu()
    opcion= int(input("elija una opcion "))
    if opcion==1:
        n= pedir_datos()
        print(f"la suma de los divisores de {n} es: {sumaDivisores(n)}")
    elif opcion==2:
        n= pedir_datos()
        print("piramide de letras:")
        trianguloCaracteres(n)
    elif opcion==3:
        n= pedir_datos()
        print(f"los primeros {n} numeros primos: ")
        mostrarPrimerosPrimos(n)
    elif opcion==4:
        n= pedir_datos()
        print(f"la serie de fibonacci inversa de {n} terminos: ")
        fibonacciInversa(n)
    elif opcion==5:
        print("saliendo del programa...")
        break

