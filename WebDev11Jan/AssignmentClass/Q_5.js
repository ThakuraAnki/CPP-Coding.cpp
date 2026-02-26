var a = 5;
function outer() {
function inner() {
console.log(a);//undefine
var a = 10;
}
inner();
console.log(a);//undefined
var a = 15;
console.log(a);//15
}
outer();