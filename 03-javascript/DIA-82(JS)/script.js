//consumir una API

const apiurl ="http://jsonplaceholder.typicode.com";

const xhr = new XMLHttpRequest();

function onRequestHandler() {
    if(this.readyState === 4 && thisstatus ===200);
    // 0 = UNSET, no se ha llamado al metodo open
    // 1 = OPENED, no se ha llamado al metodo opened
    // 2 = HEADERS_RECIEVED, se llama al metodo send
    // 3 = LOADING, esta cargando, esta recibiendo respuesta
    // 4 = DONE, se ha completado todo
    const data = JSON.parse(this.responseText);
    const HTMLResponse = document.querySelector("#app");

    const tpl = data.map(users => '<li>${user.name}</li>' );
    
}

xhr.addEventListener("load",onRequestHandler );
xhr.open('GET','${apiurl}/users');
xhr.send();