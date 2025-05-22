#3. Dado un número N, mostrar la secuencia de los primeros N términos de la serie: 1, -2, 3, -4, 5, -6, ...
def serie(n):
    for i in range(1, n + 1):
        if i % 2 == 0:
            print(f"{-i}", end=", ")
        else:
            print(i, end=", ")
    print()
