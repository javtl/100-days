// ejercicios.js

// Ejercicio:
// Crear una cuenta atrás desde 10 usando setInterval
// y mostrar un mensaje final con setTimeout.

// Solución:

let contador = 10;

const intervalo = setInterval(() => {
    console.log(`Tiempo restante: ${contador}`);
    contador--;

    if (contador < 0) {
        clearInterval(intervalo);
    }
}, 1000);

setTimeout(() => {
    console.log("¡Cuenta atrás finalizada!");
}, 11000);