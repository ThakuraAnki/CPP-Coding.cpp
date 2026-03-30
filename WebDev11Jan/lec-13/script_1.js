document.querySelector('#Mydiv')
.addEventListener('mouseenter',(ev)=>{
    console.log("Mouse Enter on Mydiv");
})

document.querySelector('body')
.addEventListener('keypress',(ev)=>{
    console.log(ev.key);
})

document.querySelector('#inp')
.addEventListener('focus',()=>{
    console.log('focus');
})
document.querySelector('#inp')
.addEventListener('blur',()=>{
    console.log('blur');
})