let id=setInterval(()=>{
    console.log("hi");

},1);
setTimeout(()=>{
    clearInterval(id);

},50)