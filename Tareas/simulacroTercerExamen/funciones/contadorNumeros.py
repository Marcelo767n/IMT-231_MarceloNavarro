#Contar cuántos números entre 1 y N son divisibles por 3 **o** terminan en 3.
def contadorNumeros(n):
    contador = 0
    for i in range(1, n + 1):
        if i % 3 == 0 or str(i)[-1] == '3':
            contador += 1
    return contador
def numerosTerminanEnTres(n):
    contador =0
    for i in range (1, n+1):
        if str(i) [-1] == '3': #esta linea de codigo verifica si el ultimo digito de i es 3
            contador += 1
    return contador