Inicio
    comparaciones = 0
    posicion = -1

Para i desde 0 hasta n-1 hacer
    comparaciones = comparaciones + 1
    
    Si datos[i] == valor entonces
        posicion = i
        encontrado = verdadero
        Retornar encontrado, posicion, comparaciones        
    Fin Si
Fin Para

    encontrado = falso
    Retornar encontrado, posicion, comparaciones
Fin