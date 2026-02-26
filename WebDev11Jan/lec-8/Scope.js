var a=-10;

function fun(){
    console.log(a);
    //Ye undefine ayga bcz of hoisting.
    var a=10;
    console.log(a);

}
fun();