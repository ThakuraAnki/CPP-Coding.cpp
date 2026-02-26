function hello(){
    console.log("Hello World");
}

let x=function(){
    console.log("Hello world");
}
x();
hello();

let sayHi=()=>{
    console.log("Hii!!");
}
sayHi();

let add=(a,b)=>{
    return a+b;
}
console.log(add(1,2));

// Arrow function ke andar single line means that by default it will be returned
let sum =(a,b)=>a+b;
console.log(sum(5,5));