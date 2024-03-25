// ejercicios.js

// Ejercicio:
// Escuchar:
// - clic en un botón
// - cambios en un input
// - movimiento del ratón

// Solución:

const boton = document.querySelector("#boton");
const input = document.querySelector("#nombre");
const zona = document.querySelector("#zona");

// Clic en botón
boton.addEventListener("click", () => {
    console.log("Has hecho clic en el botón");
});

// Cambio en input
input.addEventListener("input", (event) => {
    console.log(`Texto escrito: ${event.target.value}`);
});

// Movimiento del ratón
zona.addEventListener("mousemove", (event) => {
    console.log(`Posición X: ${event.clientX}, Y: ${event.clientY}`);
});