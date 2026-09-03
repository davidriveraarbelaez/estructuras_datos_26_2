Inicio
    Leer n
    Si n <= 0 o n> MAX entonces
	    Mostrar error
    Fin Si

    Para i desde 0 hasta n-1 hacer
	    Leer numeros[i]	
    Fin Para

    suma = 0
    pares = 0
    impares = 0
    mayor = numeros[0]
    menor = numeros[0]
    posicionMayor = 0

    Para i desde 0 hasta n-1 hacer
        suma = suma + numeros[i]

        Si numeros[i] es par entonces
            pares = pares + 1
        Sino 
            impares = impares + 1
        Fin Si

        Si numeros[i] > mayor entonces
            mayor = numeros[i]
            posicionMayor = i
        Fin Si

        Si numeros[i] < menor entonces
            menor = numeros[i]
        Fin Si
    Fin Para

    promedio = suma / n

    Mostrar suma, promedio, mayor, menor, posicionMayor, pares, impares
Fin