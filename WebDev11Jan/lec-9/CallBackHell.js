function Download(cb){
    console.log("Download starts");
    setTimeout(()=>{
        console.log("Download Ends");
        cb();
    },2000);
}
function Compression(cb){
    console.log("Compression starts");
    setTimeout(()=>{
        console.log("Compression End");
        cb();
    },2000);
}

function Uploading(cb){
    console.log("Uploading Starts");
    setTimeout(()=>{
        console.log("Uploading End");
        cb();
    },2000);
}
Download(function(){
Compression(function (){
Uploading(function(){
    console.log("All Done");

})
})
})
