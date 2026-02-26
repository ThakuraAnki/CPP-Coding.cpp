function PrintStuden(){
    console.log(this.name);
    console.log(this.age);
    console.log(this.city);
}
let newStudent={
    name:"Ankit",
    age:19,
    city:"Mumbai",
}
let newStudent1={
    name:"Shoury",
    age:19,
    city:"JK",
}
PrintStuden.call(newStudent);
console.log();
PrintStuden.call(newStudent1);


