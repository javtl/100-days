//PROMESAS
const data = [{

    title:'titulo1' ,
    year: '2019',
    isbn: '9466' , 
    author:'carlos azaustre' ,
},{
    title:'titulo2' ,
    year: '2020',
    isbn: '567' , 
    author:'carlos azaustre' ,
},{
    title:'titulo3' ,
    year:'2021' ,
    isbn: '9675' , 
    author:'carlos azaustre' ,
}

];
function getData(){
    return data;
}
getData();

function getdata(){
    return new Promise ((resolve,reject)) 
        if (data.length === 0){
            reject(new Error('data is empty'))
        }
        setTimeout(() => {
            return data;
        },2000)
}

/*{
   setTimeout(() => {
        console.log(data);
    },2000)

}
console.loggetdata();*/

//promesas
 
// ASYNC/AWAIT
