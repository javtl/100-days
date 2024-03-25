// ejercicios.js

// Ejercicio:
// Convierte una función tradicional a función flecha.
// La función debe sumar dos números y mostrar el resultado.

// Función tradicional:
// function sumar(a, b) {
//     return a + b;
// }

// Solución con función flecha:

const sumar = (a, b) => a + b;

const resultado = sumar(5, 3);

console.log(`La suma es: ${resultado}`);