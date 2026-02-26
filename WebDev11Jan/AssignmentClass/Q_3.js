var x = 10;
function outer() {
console.log(x); //Undefine
var x = 20;
function inner() {
console.log(x);//Undefine
var x = 30;
console.log(x);//30
}
inner();
console.log(x);//20
}
outer();