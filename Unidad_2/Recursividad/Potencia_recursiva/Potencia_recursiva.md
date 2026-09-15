# Potencia recursiva

## Implementar

int potencia(int base, int exponente);

Sin usar ciclos ni función pow

**Ejemplo**

potencia(2,5)=32

### Solución

int potencia (int base, int exponente){
    if (exponente == 0){
        return 1; // Caso base
    }
    return base * potencia(base, exponente - 1);
}

### Complejidad

Temporal:
Espacial:

¿Cómo podría hacerla más eficiente si el exponente es par?

**Pista: x**8 = (x**4)**2 **