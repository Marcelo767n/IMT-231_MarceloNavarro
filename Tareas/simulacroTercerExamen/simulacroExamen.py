from funciones import menuContador, piramide, serie, contadorPrimos, verifPalindromo
opcion=1
def menu():
    print("""Menu de opciones
    1. Contar números que terminan en 3 o son divisibles por 3
    2. Piramide de asteriscos
    3. Serie de números
    4. Contar números primos
    5. Verificar palíndromo
    6. Salir""")
def pedir_datos():
    n= int(input("ingrese un numero: "))
    return n

while True:
    menu()
    opcion= int(input("elija una opcion "))
    if opcion==1:
        n= pedir_datos()
        menuContador(n)
    elif opcion==2:
        n= pedir_datos()
        piramide(n)
    elif opcion==3:
        n= pedir_datos()
        serie(n)
    elif opcion==4:
        n= pedir_datos()
        print(f"la cantidad de numeros primos entre 1 y {n} es: {contadorPrimos(n)}")
    elif opcion==5:
        palabra= input("ingrese una palabra: ")
        verifPalindromo(palabra)
    elif opcion==6:
        print("saliendo del programa")
        break

