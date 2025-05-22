def fibonacciInversa(n):
    fib = [0, 1]  # Primeros términos de la serie
    for i in range(2, n):
        fib.append(fib[i - 1] + fib[i - 2])
    
    # Cortamos la lista si n < 2
    fib = fib[:n]
    fib_i=fib[::-1]
    print(fib_i)
    # Imprimimos en orden inverso
