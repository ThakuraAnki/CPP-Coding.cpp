function khnanaBanana(){
    console.log("KhanaBanana Start");
    setTimeout(()=>{
        console.log("KhanaBanana End");
    },2000)
}
// U can also thing cb is nothing u can you any namefuc whatever u want give its
    function sabzilanan(cb){
        console.log("Sabzi Lana");
        setTimeout(()=>{
            console.log("Sabzi le aye");
            cb();
        },2000)
    }
    sabzilanan(khnanaBanana);
