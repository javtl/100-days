function verificarPropiedad(obj, propiedad){
    if(obj.hasOwnProperty(propiedad)){
        return "Propiedad:" + obj[propiedad];
    } else {
        return "El objeto no tiene esa propiedad.";
    }

}

var miCuaderno = {
    "color": "verde",
    "categoria": 3,
    "precio": 5
};

console.log(verificarPropiedad(miCuarderno,"color"));
