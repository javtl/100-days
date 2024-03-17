//CURSO DE PROGRAMACION con JAVASCRIPT desde cero [2021] | Aprende a programar

//variables
let dato = 5
console.log(dato)

//tipos de datos 
Number 
String
Boolean
undefined 

let miNumero = 1
typeof(miNumero) == "number"

let miString =`Hola Mundo`
typeof(miString) == "string"

let miBoolean = false
typeof(miBoolean) == "boolean"

let d
typeof(d) == "number"


//operadores

let suma = 5+5

let resta = 3-2

let division = 3/3

let multiplicacion = 5*10

let potencia = 3**3

// concatenar variables

let frase = "hola" + "mundo" + "!"

//operadores post y pre decremento incremento

let x =1 //x=1

let y = ++x //y=2

let z= x++ // z=2 x=3

let a = x-- // x=3 a=3 X=2

let b = --x // b=1 x=1

//operadores booleanos
//!  negacion
!true
//=== igualdad
true === true
//!==  distinto





//comparaciones < > 
5>3 
5<3
3>=3
2<=1


//operadores logicos
// and = && 

true && true 
true && false && true

//operador or
// ||

false || false || false



//condicionales

// sentencia if
if(true){
    console.log('es true')
}

//sentencia else

let operacion = 5+1
if(operacion>7){

    console.log('es true');
} else{
    console.log('es false')
}



//sentencia switch

let opswitch = 5+2

switch(opswitch){

    case 0:
        console.log("resultado = 0")
     break;


    case 7:
        console.log("resultado = 7");
    break;

    default:
        console.log("diferente a 5 y 7")
}

//funciones
function saludar (nombre){

    return `hola ${nombre}`
}

saludar("Carlos")
saludar("Javier")



