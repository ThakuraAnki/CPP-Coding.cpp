let p= new Promise(function(resolve, reject) {
    let number = 2;
    if(number %2 == 0){
        resolve("Hogya")
    }
    else{
        reject("Nhi hua");
    }
})

// p
// .then(resolveFuncDefineKaro);
// .catch(rejectFuncDefineKaro);
// p.then(resolveFuncDefineKaro,rejectFuncDefineKaro);
p
.then(function(msg){
    console.log(msg);
})
.catch(function(err){
    console.log(err);
})

console.log("Hello World");