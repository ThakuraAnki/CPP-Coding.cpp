let id =setInterval(function(){
    console.log("Hello i am learning strings, In the class today. Aaj merko yeh samjh aa hi jaega");

},1);
setTimeout(()=>{
    clearInterval(id);
},50);