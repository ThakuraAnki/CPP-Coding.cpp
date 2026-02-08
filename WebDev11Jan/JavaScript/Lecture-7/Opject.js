let obj={
    a:10,
    name:"Ankit",
    age:20,
    ' ':"I am a space",
    'FirstNmae':"coding"
}
// console.log(obj.age);
// console.log(obj[' ']);
// console.log(obj['FirstNmae']);

for(let key in obj){
    console.log(key ,":",obj[key]);
}