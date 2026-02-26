function GenFuction(){

    function HelloWorld(){
        console.log("Hello World");
    }
    // HelloWorld Return ki,Call nhi kiya Hello World ko.
    return HelloWorld;
} 
//Gen Function ko call kr rha hai
let x=GenFuction();
// Gen function ne jo function return kiya usse ham call kr skte hai.
x();
