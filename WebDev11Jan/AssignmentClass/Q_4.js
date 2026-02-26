var y = 50;
function first() {
console.log(y);//undefine
var y = 100;
function second() {
console.log(y);//Undefine
var y = 150;
console.log(y);//150
}
second();
console.log(y);//100
}
first();
console.log(y);//50
