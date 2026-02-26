// setTimeout(function,timeInMilliSeconds);
setTimeout(function(){
    console.log("done");
},5000);
console.log("Hello");

function waitNsec(n){
    for(let i=0;i<n;i++)waitNsec();
}
waitNsec(5);