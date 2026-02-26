let student={
    name:"Ankit",
    age:19,
    city:'Delhi',
    PrintDetail:function(){
        console.log(this.name);
        console.log(this.age);
        console.log(this.city);
    }
}
student.PrintDetail();
