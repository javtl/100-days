// ejercicios.js

// Ejercicio:
// Obtener datos reales de una API pública (JSONPlaceholder)
// y mostrarlos en consola.

// Solución usando fetch + async/await

const obtenerUsuarios = async () => {
    try {
        const respuesta = await fetch("https://jsonplaceholder.typicode.com/users");
        
        const datos = await respuesta.json();

        console.log("Usuarios obtenidos:");
        
        datos.forEach(usuario => {
            console.log(`Nombre: ${usuario.name} | Email: ${usuario.email}`);
        });

    } catch (error) {
        console.log("Error al obtener los datos:", error);
    }
};

obtenerUsuarios();