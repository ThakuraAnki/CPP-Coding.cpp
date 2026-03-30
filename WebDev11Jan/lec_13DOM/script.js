let btn=document.getElementById('btn');

// btn.onclick=function(){
//     console.log("clicked");
// }
// btn.onclick=function(){
//     console.log("I am click");
// }

btn.addEventListener('click',()=>{
   console.log("Clicked"); 
})
btn.addEventListener('click',()=>{
   console.log("I am click"); 
})
document.querySelector('#idMydiv')
.addEventListener('mouseenter',()=>{
    console.log("Mouse Enetered on mydiv");
})
document.querySelector('body')
.addEventListener('keypress',(ev)=>{
    console.log(ev.key);
})
document.querySelector('inp')
.addEventListener('blur',()=>{
    console.log('blur');
})