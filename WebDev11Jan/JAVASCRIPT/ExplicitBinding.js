function hello(name,age){
    console.log(this,`Name:${name} and age:${age}`);
}

let obj1={a:1,b:2};
let obj2={a:1,b:2};

console.log(obj1.a);
hello.apply(obj1,["ANkit",19]);
hello.apply(obj1,["Khushi",19]);

