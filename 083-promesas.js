// ejercicios.js

// Ejercicio:
// Crear una promesa que simule la carga de datos de un servidor.
// Debe resolverse después de 2 segundos con un mensaje de éxito.

// Solución:

const cargarDatos = () => {
    return new Promise((resolve, reject) => {
        console.log("Cargando datos del servidor...");

        setTimeout(() => {
            const exito = true;

            if (exito) {
                resolve("Datos cargados correctamente");
            } else {
                reject("Error al cargar los datos");
            }
        }, 2000);
    });
};

// Uso de la promesa
cargarDatos()
    .then((mensaje) => {
        console.log(mensaje);
    })
    .catch((error) => {
        console.log(error);
    });