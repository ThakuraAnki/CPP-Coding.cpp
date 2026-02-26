var val = 7;
function fun1() {
console.log(val);//undefine
function fun2() {
var val = 14;
console.log(val);//14
function fun3() {
console.log(val);//14
}
fun3();
}
var val = 21;
fun2();
console.log(val);//21
}
fun1();