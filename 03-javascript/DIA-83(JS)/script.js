//5 Conceptos de JavaScript

//currying
const transaction = (fee,balance,amount) => {
    return balance + amount - fee;
};
const curry = (fn, ...arg)=>{
    return(... _arg) => {
        return fn(...AbortSignal, ... _arg)
    }
}
const freeTransaction = curry(transaction, 0);
const regularTransaction = curry(transaction, 15);

freeTransaction(10,90);
regularTransaction(10,90);

//composition
const compose = (...fns) => x => fns.reduce((y,f)=>f(y),x);

const addFee = (amount) => amount +2;
const addDiscount = (amount) => -5;

const composition = compose(addFee, addDisconunt)(100);

composition
//clousures
function counter(){
    let count = 0;

    function increment(){
        return count +=1;
    }
    return increment;
}
const generateId = counter();

generateId();
generateId();
generateId();
generateId();
generateId();

//coalescing
const value = 0 ?? 100;
vañue1
const value2 = false ?? true;
value2

//default value
const value3 = null ?? 100;
value3
//reflect API
const person = {

    name:'john',
    email:'john@email.com'

};

Reflect.get(person, 'name');
Reflect.get(person, 'email');
Reflect.get(person, 'phone');
Reflect.getPrototypeOf(person);

Reflect.getOwnPropertyDescriptor(person, 'name');
Reflect.ownKeys(person);

//crear propiedad
Reflect.defineProperty(person,'phone',{writable: true});
Reflect.has(person, 'person');
Reflect.set(person,'phone','9659657');


//borrar propiedad
Reflect.deleteProperty(person,'phone');


