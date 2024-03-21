// ejercicios.js

// Ejercicio:
// Dada una lista de números,
// filtra los mayores que 5
// y después multiplícalos por 2.

// Solución:

const numeros = [2, 4, 6, 8, 3, 10, 1];

const resultado = numeros
    .filter(numero => numero > 5)
    .map(numero => numero * 2);

console.log(`Resultado: ${resultado}`);