// ejercicios.js

// Ejercicio:
// Extrae datos de un objeto complejo usando destructuring.
// Muestra nombre, ciudad y email en consola.

// Solución:

const usuario = {
    nombre: "Ana",
    edad: 30,
    direccion: {
        ciudad: "Jerez",
        calle: "Calle Real"
    },
    contacto: {
        email: "ana@email.com",
        telefono: "600123456"
    }
};

const { nombre, direccion: { ciudad }, contacto: { email } } = usuario;

console.log(`Nombre: ${nombre}`);
console.log(`Ciudad: ${ciudad}`);
console.log(`Email: ${email}`);