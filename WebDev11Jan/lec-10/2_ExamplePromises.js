setTimeout(()=>{
console.log("Hi from SetTimeOut");
},0);
let p=new Promise((res, re) => {
    res("Hey! i am resolved");
});

p
.then((msg)=>{
console.log(msg);
})
.catch(err=>{
console.log(err);
})
console.log("Hello World");