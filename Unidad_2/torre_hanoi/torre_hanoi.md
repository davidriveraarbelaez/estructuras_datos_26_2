# Torres de Hanoi

Implementar la solución recursiva de las torres de Hanoi para n discos.

1. Análisis del problema

**Entradas**

| Dato | Tipo | Descripción |
|------|------|-------------|
| n | entero | Número de discos |
| origen, destino, auxiliar | char | Identificadores de los postes |

**Salidas**
* Secuencia de movimientos

2. Pseudocódigo

```
funcion hanoi(n, origen, destino, auxiliar):
    si n == 1:
        imprimir "Mover disco de " + origen + " a " + destino
        retornar
    fin si

    hanoi(n-1, origen, auxiliar, destino)
    imprimir "Mover disco de " + origen + " a " + destino
    hanoi(n-1, auxiliar, destino, origen)
fin funcion
```