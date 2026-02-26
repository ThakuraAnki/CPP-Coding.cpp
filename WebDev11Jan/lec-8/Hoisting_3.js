var a=-10;
 function fun(){
    console.log(a);
    var a=10;
    console.log(a);
 }
 fun();

//  ------------------AfterHoisting-----------------------------
// var a;
// function fun() {
//     var a;
//     // ------ HOISTING INSIDE FUNCTION
//     console.log(a);

//     a = 10;

//     console.log(a);
// }
// //  -------------------
// a = -10;

// fun();
