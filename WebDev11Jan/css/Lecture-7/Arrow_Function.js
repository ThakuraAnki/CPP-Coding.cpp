function hello(){
    console.log("Hello ,World");
}
let x=function(){
    console.log("Hello, World");
}
hello();
x()
let sayhi=()=>{
    console.log("Hii");
}
sayhi();
let add=(a,b)=>{
    return a+b;
}
console.log(add(5,6));

let sum2=(a,b)=>a+b;
console.log(sum2(8,9));
  