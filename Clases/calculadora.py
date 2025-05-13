from operaciones import sumar, restar, multiplicar, dividir


opcion=0

def pedir_datos():
    a= float(input("ingrese el primer numero: "))
    b= float(input("ingrese el segundo numero: "))
    return a, b
while True:
    print(""" 
    Bienvenido a la calculadora las opciones son:
    1. Sumar
    2. Restar
    3. Multiplicar
    4. Dividir
    5. Salir
    """)
    opcion= int(input("elige una opcion: "))
    if opcion==1:
        a, b=pedir_datos()
        print(f"la suma de {a} y {b} es: {sumar(a,b)}")
    elif opcion==2:
        a, b=pedir_datos()
        print(f"la resta de {a} y {b} es: {restar(a,b)}")
    elif opcion==3:
        a, b=pedir_datos()
        print(f"la multiplicacion de {a} y {b} es: {multiplicar(a,b)}")
    elif opcion==4:
        a, b=pedir_datos()
        print(f"la division de {a} y {b} es: {dividir(a,b)}")
    elif opcion==5:
        print("saliendo del programa")
        break