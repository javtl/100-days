//closures

const saludar = function (nombre){

    return "hola" + nombre;
}

saludar("javi");

saludar;

//funcion dentro de otra

const a = "ey";

function global(){

    const b ="que";
    function local(){
        const c = "tal";
        return a+b+c;
    }
    return local;
}

global(); //flocal()
global()();// ey que tal

const closure = global();

closure();

//ejemplo sencillo

const miContador = function(){

    let _contador=0;

    function incrementar(){
        return _contador++;
    }

    function decrementar(){

        return _contador--;
    }

    function valor(){
        return contador;
    }

    return {
        incrementar,
        decrementar,
        valor,
    }
}
