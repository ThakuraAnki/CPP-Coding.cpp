function person(){
    console.log(this.name);
    console.log(this.age);
}

    let  p1={
        name:"Ankit",
        age:25
}
person.call(p1);  