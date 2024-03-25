//bucles
//while
let i=1
while(i<1){

    console.log(i)
    i++;

}

function buclewhile(num){

   let i = 0;
   while(i<num){
    console.log(i);
    i++;
   } 
}
buclewhile(11);

//do while

function dowhile(num) {
    let i=0;
    do{

        console.log(i);
        i++;

    }while(i<num);

}

dowhile(11);



//for

function buclefor(num){

    for(let i=0; i<num; i++){

        console.log(i);
    }
}
buclefor(11);


//array
const array1 = [];

const obj = {

    unArray: new Array(10000)
};

for(let i, longuitud = obj.unArray.length ; i<longuitud; i++){
    obj.unArray[i] = 'ey';
}



